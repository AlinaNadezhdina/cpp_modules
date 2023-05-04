#include "Overload.hpp"

Overload::Overload(int value) :_val(value){}

Overload::~Overload()
{
}

Overload &Overload::operator=(const Overload &copy)
{
	if (this != &copy)
		this->_val = copy.getVal();
	return (*this);
}

Overload::Overload(const Overload &copy)
{
	*this = copy;
}

int	Overload::getVal() const
{
	return this->_val;
}

bool Overload::operator<( Overload const & other ) const{ 
	return (this->_val < other._val); 
}

bool Overload::operator>(Overload const & other ) const{ 
	return (this->_val > other._val); 
}

bool Overload::operator<=( Overload const & other ) const{ 
	return (this->_val <=other._val); 
}

bool Overload::operator>=( Overload const & other ) const{ 
	return (this->_val >=other._val); 
}

bool Overload::operator!=( Overload const & other ) const{ 
	return (this->_val != other._val); 
}

bool Overload::operator==( Overload const & other ) const{ 
	return (this->_val == other._val); 
}