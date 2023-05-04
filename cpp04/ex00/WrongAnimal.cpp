#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->_type = "Default";
	std::cout<<"Default Constructor WrongAnimal was called"<<std::endl;
}
WrongAnimal::WrongAnimal(const std::string &type)
{
	this->_type = type;
	std::cout<<"Constructor with type WrongAnimal was called"<<std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout<<"Destructor WrongAnimal was called"<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	*this = WrongAnimal;
	std::cout<<"Copy constructor WrongAnimal was called"<<std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
	std::cout << "Assignment operator Cat called!" << std::endl;
	this->_type = WrongAnimal._type;
	return *this;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes wrong sound!" << std::endl;
}

const std::string	&WrongAnimal::getType() const
{
	return this->_type;
}