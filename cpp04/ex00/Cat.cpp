#include "Cat.hpp"

// Cat::Cat():Animal("Cat")
// {
// 	std::cout<<"Default constructor  "<<  this->_type<< " was called"<<std::endl;
// }

// Cat::Cat(const Cat &cat): Animal(cat._type)
// {
// 	std::cout << "Copy constructor Cat called" << std::endl;
//     *this = cat;
// }

// Cat::~Cat()
// {
// 	std::cout<<"Destructor Cat was called"<<std::endl;
// }


// Cat	&Cat::operator=(const Cat &cat)
// {
// 	std::cout << "Assignment operator called! (Cat)" << std::endl;
// 	this->_type = cat._type;
// 	return *this;
// }

void	Cat::makeSound() const
{
	std::cout<<"Meow-meow-meooooow"<<std::endl;
}