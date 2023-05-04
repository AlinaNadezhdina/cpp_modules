#include "Ice.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice	&Ice::operator=(const Ice &ice)
{
	AMateria::operator=(ice);
	return (*this);
}

Ice::Ice(const Ice &ice): AMateria(ice) 
{
}

Ice::~Ice()
{
}

Ice	*Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}