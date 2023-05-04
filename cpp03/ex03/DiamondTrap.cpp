#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "DiamondTrap constructor called\n";
	this->_name = "Ololo";
	ClapTrap::_name = this->_name + "clap_name";
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name) {
	std::cout << "DiamondTrap constructor of " << name << " is called\n";
	this->_name = name;
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPoints = FragTrap::getHitPoints();
	this->_energyPoints = ScavTrap::getEnergyPoints();
	this->_attackDamage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) {
	std::cout << "Copy DiamondTrap constructor is called\n";
	*this = obj;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "the DiamondTrap destructor is called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondTrap) {
	std::cout <<"Copy DiamondTrap assignment operator called\n";
	this->_name = diamondTrap.getName();
	this->_hitPoints = diamondTrap.getHitPoints();
	this->_energyPoints = diamondTrap.getEnergyPoints();
	this->_attackDamage = diamondTrap.getAttackDamage();
	return  (*this);
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << _name << " (DiamondTrap) | " << ClapTrap::_name << " (ClapTrap)"  << std::endl;
}