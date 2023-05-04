#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	this->_brain = new Brain();
	std::cout<<"Default constructor  "<<  this->_type<< " was called"<<std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog._type)
{
	this->_brain = new Brain();
	std::cout << "Copy constructor Dog called" << std::endl;
    *this = dog;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout<<"Destructor Dog was called"<<std::endl;
}

Dog	&Dog::operator=(const Dog &dog)
{
	if (this != &dog){
		this->_type = dog._type;
		*_brain = *dog._brain;
	}
	std::cout << "Assignment Dog operator called!" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout<<"Woof-woof-wooooof"<<std::endl;
}
