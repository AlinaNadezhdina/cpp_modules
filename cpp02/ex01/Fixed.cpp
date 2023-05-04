#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout<<"Default constructor called"<<std::endl;
	this->_fixedPointNum = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;

}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
    this->_fixedPointNum = value << this->_fracionalBitNum;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
    this->_fixedPointNum = (int)(roundf(value * (1 << this->_fracionalBitNum)));
}

float Fixed::toFloat(void) const {
    return static_cast <float>(this->_fixedPointNum) / (1 << this->_fracionalBitNum);
	//Операция static_cast в языке C++ осуществляет явное допустимое приведение типа данных
}

int Fixed::toInt(void) const {
    return ((int)(this->_fixedPointNum >> this->_fracionalBitNum));
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNum = obj.getRawBits();
	return *this;
 }

int	Fixed::getRawBits() const
{
	return this->_fixedPointNum;	
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed){
    os << fixed.toFloat();
    return (os);
}

 Fixed::~Fixed()
 {
	std::cout << "Destructor called" << std::endl;
 }
