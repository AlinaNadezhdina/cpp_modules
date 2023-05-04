#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	ClapTrap clap("John");
	ClapTrap trap("Poul");
	ScavTrap scav("Ringo");

	clap.attack(trap.getName());
	trap.takeDamage(clap.getAttackDamage());
	trap.beRepaired(3);
	trap.takeDamage(5);
	trap.beRepaired(2);
	scav.attack(clap.getName());
	scav.takeDamage(3);
	scav.beRepaired(3);
	scav.guardGate();
	trap.printInfo();
	clap.printInfo();
	scav.printInfo();

}