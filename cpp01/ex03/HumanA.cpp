#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout<< "Human: "<<this->_name <<  " with weapon" 
	<< this->_weapon.getType() << " is ready!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout<< "Human: "<< this->_name <<  " with weapon" 
	<< this->_weapon.getType() << " is died!" << std::endl;
}

void	HumanA::attack()
{
	std::cout<< this->_name << " attacks with his " 
	<< this->_weapon.getType() << std::endl;
}