#include "Animal.hpp"

Animal::Animal()
{
	this->_type = "Default";
	std::cout<<"Default Constructor Animal was called"<<std::endl;
}
Animal::Animal(const std::string &type)
{
	this->_type = type;
	std::cout<<"Constructor with type Animal was called"<<std::endl;
}
Animal::~Animal()
{
	std::cout<<"Destructor Animal was called"<<std::endl;
}

Animal::Animal(const Animal &animal)
{
	*this = animal;
	std::cout<<"Copy constructor Animal was called"<<std::endl;
}

Animal	&Animal::operator=(const Animal &animal)
{
	std::cout << "Assignment operator Cat called!" << std::endl;
	this->_type = animal._type;
	return *this;
}

void	Animal::makeSound() const
{
	std::cout << "Animal makes sound!" << std::endl;
}

const std::string	&Animal::getType() const
{
	return this->_type;
}