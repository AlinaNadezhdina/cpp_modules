#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie()
{
    std::cout<<"Zombie " <<this->name<< " is died!!!!"<<std::endl;
}

void    Zombie::announce()
{
    std::cout<<this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name, int i)
{
	this->name = name + std::to_string(i);
}