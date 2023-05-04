#include "Cure.hpp"

Cure::Cure()
{
	this->_type = "cure";
}

Cure	&Cure::operator=(const Cure &cure)
{
	AMateria::operator=(cure);
	return (*this);
}

Cure::Cure(const Cure &cure): AMateria(cure) 
{
}

Cure::~Cure()
{
}

Cure	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target) 
{
    std::cout << "* heals " + target.getName() +"’s wounds *" << std::endl;
}