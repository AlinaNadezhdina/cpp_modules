#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->initMateria();
}

void 	MateriaSource::initMateria()
{
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &materiaSource)
{
	if (this == &materiaSource)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
		this->_materias[i] = materiaSource._materias[i]->clone();
	}
	std::cout << "Assignment operator MateriaSource" << std::endl;
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource)
{
	*this = materiaSource;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_materias[i] == NULL)
		{
			this->_materias[i] = materia;
			break;
		}	
	}
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++) {
        if (this->_materias[i] != NULL && this->_materias[i]->getType() == type) {
            return this->_materias[i]->clone();
        }
    }
    return NULL;
}