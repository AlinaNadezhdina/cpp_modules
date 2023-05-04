#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout<<"Default constructor  "<<  this->_type<< " was called"<<std::endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
	std::cout << "Copy constructor WrongCat called" << std::endl;
    *this = WrongCat;
}

WrongCat::~WrongCat()
{
	std::cout<<"Destructor WrongCat was called"<<std::endl;
}

WrongCat	&WrongCat::operator=(const WrongCat &WrongCat)
{
	std::cout << "Assignment operator called! (WrongCat)" << std::endl;
	this->_type = WrongCat._type;
	return *this;
}


void	WrongCat::makeSound() const
{
	std::cout<<"Pepepepee"<<std::endl;
}