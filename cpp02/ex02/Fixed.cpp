#include "Fixed.hpp"

Fixed::Fixed()
{
	this->_fixedPointNum = 0;
	//std::cout<<"Default constructor called"<<std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
	//std::cout << "Int constructor called" << std::endl;
    this->_fixedPointNum = value << this->_fracionalBitNum;
}

Fixed::Fixed(const float value)
{
	//std::cout << "Float constructor called" << std::endl;
    this->_fixedPointNum = (int)(roundf(value * (1 << this->_fracionalBitNum)));
}

int	Fixed::getRawBits() const
{
	return this->_fixedPointNum;	
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointNum = raw;
}

float Fixed::toFloat(void) const 
{
    return static_cast <float>(this->_fixedPointNum) / (1 << this->_fracionalBitNum);
	//Операция static_cast в языке C++ осуществляет явное допустимое приведение типа данных
}

int Fixed::toInt(void) const 
{
    return ((int)(this->_fixedPointNum >> this->_fracionalBitNum));
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	//std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointNum = obj.getRawBits();
	return *this;
 }

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}

Fixed Fixed::operator+(const Fixed &fixed) const
{
	return Fixed(toFloat()+fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) const
{
	return Fixed(toFloat()-fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) const
{
	return Fixed(toFloat()*fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) const{
	return Fixed(toFloat()/fixed.toFloat());
}

Fixed &Fixed::operator++(void)//префиксный ++
{
	++this->_fixedPointNum;
	return *this;
}

Fixed &Fixed::operator--(void)//префиксный --
{
	--this->_fixedPointNum;
	return *this;
}

Fixed Fixed::operator++(int)//постфиксный ++
{
	Fixed temp(*this);
	++this->_fixedPointNum;
	return temp;
}

Fixed Fixed::operator--(int)//постфиксный --
{
	Fixed temp(*this);
	--this->_fixedPointNum;
	return temp;
}

bool Fixed::operator==(const Fixed &fixed) const 
{
	return this->_fixedPointNum == fixed.getRawBits();
}

bool Fixed::operator>(const Fixed &fixed) const 
{
	return this->_fixedPointNum > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const 
{
	return this->_fixedPointNum < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const 
{
	return this->_fixedPointNum >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const 
{
	return this->_fixedPointNum <= fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return this->_fixedPointNum != fixed.getRawBits();
}

const Fixed &Fixed::max(Fixed &f1, Fixed &f2) 
{
	return f1 > f2 ? f1: f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) 
{
	return f1 > f2 ? f1: f2;
}

const Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
	return f1 < f2 ? f1 : f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) 
{
	return f1 < f2 ? f1 : f2;
}

 Fixed::~Fixed()
 {
	//std::cout << "Destructor called" << std::endl;
 }
