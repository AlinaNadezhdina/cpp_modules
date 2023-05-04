#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	ClapTrap clap("John");
	ClapTrap trap("Poul");
	ScavTrap scav("Ringo");

	FragTrap frag("George");


	clap.attack(trap.getName());
	trap.takeDamage(clap.getAttackDamage());
	trap.beRepaired(3);
	trap.takeDamage(5);
	trap.beRepaired(2);

	scav.attack(clap.getName());
	clap.takeDamage(3);
	clap.beRepaired(3);	
	scav.guardGate();

	clap.attack(frag.getName());
	frag.takeDamage(2);
	frag.beRepaired(1);
	frag.highFivesGuys();


	trap.printInfo();
	clap.printInfo();
	scav.printInfo();
	frag.printInfo();
}