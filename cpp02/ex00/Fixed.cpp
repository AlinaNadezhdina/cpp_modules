#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointNum = 0;
	std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNum = obj.getRawBits();
	return *this;
 }

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPointNum;	
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}

 Fixed::~Fixed()
 {
	std::cout << "Destructor called" << std::endl;
 }
