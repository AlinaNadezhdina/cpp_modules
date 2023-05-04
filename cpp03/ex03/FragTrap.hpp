#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap();
	~FragTrap();

	FragTrap(std::string name);
    FragTrap(const FragTrap &obj);

    FragTrap &operator=(const FragTrap &obj);

	void highFivesGuys(void);


protected:
	static const unsigned int defaultHitPoints = 100;
	static const unsigned int defaultEnergyPoints = 100;
	static const unsigned int defaultAttackDamage = 30;
};
#endif