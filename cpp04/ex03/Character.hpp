#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class Character:public ICharacter
{
private:
	std::string _name;
	AMateria	*_materiaInventory[4];
	void		initMateriaInventory();
public:
	Character();
	Character(std::string name);
    Character & operator = (const Character &character);
    Character( const Character &character);
    ~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	void	printMaterias();
};
#endif