#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout<<"Default constructor  "<<  this->_type<< " was called"<<std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog._type)
{
	std::cout << "Copy constructor Dog called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
	std::cout<<"Destructor Dog was called"<<std::endl;
}

Dog	&Dog::operator=(const Dog &Dog)
{
	std::cout << "Assignment  operator called! (Dog)" << std::endl;
	this->_type = Dog._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout<<"Woof-woof-wooooof"<<std::endl;
}