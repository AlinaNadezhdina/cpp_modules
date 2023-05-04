#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	std::cout<< "Human: "<<this->_name <<  " with weapon NULL is ready!" << std::endl;
}

HumanB::~HumanB()
{
	std::cout<< "Human: "<< this->_name <<  " with weapon "
	<< this->_weapon->getType()<<" is died!" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
void	HumanB::attack(void)
{
	std::cout<< this->_name << " attacks with his " 
	<<this->_weapon->getType() << std::endl;
}