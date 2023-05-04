#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string _type;
public:
	AMateria();
	virtual ~AMateria();
	AMateria(std::string const &type);
	AMateria(const AMateria &materia);
	AMateria &operator=(const AMateria &materia);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif