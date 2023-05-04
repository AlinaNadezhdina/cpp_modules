#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
	DiamondTrap dTrap = DiamondTrap("Paul");
	ClapTrap clap = ClapTrap("John");

	dTrap.whoAmI();
	dTrap.attack(clap.getName());
	dTrap.takeDamage(10);
	dTrap.beRepaired(10);
	dTrap.whoAmI();
}