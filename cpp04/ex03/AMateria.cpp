#include "AMateria.hpp"

AMateria::AMateria(): _type("default")
{
}

AMateria::AMateria(std::string const &type) :_type(type)
{
}

AMateria::~AMateria()
{
}

AMateria::AMateria(const AMateria &materia):_type(materia._type)
{
}

AMateria &AMateria::operator=(const AMateria &materia)
{
	if (this == &materia)
		return (*this);
	this->_type = materia._type;
	return (*this);
}

std::string const &AMateria::getType() const {
    return _type;
}
void AMateria::use(ICharacter& target)
{
	std::cout << "default use : " << target.getName();
}