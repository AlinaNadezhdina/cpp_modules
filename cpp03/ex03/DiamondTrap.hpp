#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"


class DiamondTrap: public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &obj);
	DiamondTrap &operator=(const DiamondTrap &obj);

	void	attack(std::string const &target);
	void	whoAmI();

private:
	std::string _name;
};
#endif