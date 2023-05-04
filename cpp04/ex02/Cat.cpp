#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	this->_brain = new Brain();
	std::cout<<"Default constructor  "<<  this->_type<< " was called"<<std::endl;
}

Cat::Cat(const Cat &cat): Animal(cat._type)
{
	this->_brain = new Brain();
	std::cout << "Copy constructor Cat called" << std::endl;
    *this = cat;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout<<"Destructor Cat was called"<<std::endl;
}

Cat	&Cat::operator=(const Cat &cat)
{
	if (this != &cat){
		this->_type = cat._type;
		*_brain = *cat._brain;
	}
	std::cout << "Assignment Cat operator called!" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout<<"Meow-meow-meooooow"<<std::endl;
}
