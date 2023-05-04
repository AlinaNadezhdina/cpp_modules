#include "Character.hpp"

Character::Character()
{
	this->initMateriaInventory();
}

void	Character::initMateriaInventory()
{
	for(int i = 0; i < 4; i++)
		this->_materiaInventory[i] = NULL;
}

Character::Character(std::string name)
{
	this->_name = name;
	this->initMateriaInventory();
}

Character	&Character::operator=(const Character &character)
{
	if (this == &character)
		return *this;
	this->_name = character._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaInventory[i])
			delete this->_materiaInventory[i];
		this->_materiaInventory[i] = character._materiaInventory[i]->clone();
	}
	std::cout << "Assignment operator Character" << std::endl;
	return *this;
}

Character::Character(const Character &character)
{
	*this = character;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaInventory[i])
			delete this->_materiaInventory[i];
	}
	std::cout << "Destructor Character called" << std::endl;
}

const	std::string &Character::getName() const
{
	return this->_name;
}

void	Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaInventory[i] == NULL)
		{
			this->_materiaInventory[i] = materia;
			break;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 ||  idx > 3 || this->_materiaInventory[idx] == NULL)
	 return ;
	this->_materiaInventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 ||  idx > 3 || this->_materiaInventory[idx] == NULL)
		return ;
	this->_materiaInventory[idx]->use(target);
}

void  Character::printMaterias() {
    std::cout << "##########" << std::endl;
    for (int i = 0; i < 4; i++) {
        if (this->_materiaInventory[i]) {
            std::cout << "I == "<< i << " " << this->_materiaInventory[i]->getType() << std::endl;
        } else {
            std::cout << std::endl;
        }
    }
    std::cout << "##########" << std::endl;
}



