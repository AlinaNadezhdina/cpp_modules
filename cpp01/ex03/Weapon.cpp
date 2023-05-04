#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
	std::cout<<this->_type<< " is ready!"<<std::endl;
}

Weapon::~Weapon()
{
	std::cout<<this->_type<< " is broken:("<<std::endl;
}

const std::string	Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(const std::string &myType)
{
	this->_type = myType;
}
