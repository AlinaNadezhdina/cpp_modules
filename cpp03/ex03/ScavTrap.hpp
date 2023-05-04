#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string name);
    ScavTrap(const ScavTrap &obj);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &obj);
    void attack(const std::string& target);
    void guardGate(void);

protected:
	static const unsigned int defaultHitPoints = 100;
	static const unsigned int defaultEnergyPoints = 50;
	static const unsigned int defaultAttackDamage = 20;
};
#endif
