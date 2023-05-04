#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int         _hitPoints;//health
    int         _energyPoints;
    int         _attackDamage; 

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &obj);
    ~ClapTrap();

    ClapTrap &operator=(const ClapTrap &obj);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
    std::string getName(void) const;
    int		    getHitPoints( void ) const;
    int		    getEnergyPoints( void ) const;
    int		    getAttackDamage( void ) const;
    void		printInfo();

    void        setName(std::string name);
    void        setHitPoints(unsigned int hitpoints);
    void        setEnergyPoints(unsigned int energyPoints);
    void        setAttackDamage(unsigned int attackDamage);    
};
#endif
