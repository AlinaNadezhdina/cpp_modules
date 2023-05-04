#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap man1("Jim");
	ClapTrap man2("Bob");

	man1.attack(man2.getName());
	man2.takeDamage(man1.getAttackDamage());
	man2.beRepaired(3);
	man2.takeDamage(5);
	man2.beRepaired(2);
	man2.printInfo();
	man1.printInfo();
}