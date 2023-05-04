#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout<<"Default constructor ScavTrap was called"<<std::endl;
    this->setName("UncleFedya");
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(20);
}

ScavTrap::ScavTrap(const  std::string name) : ClapTrap(name)
{
    std::cout << "Constructor ScavTrap " << name << " was called\n";
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

ScavTrap::~ScavTrap()
{
    std::cout<<"Destructor ScavTrap of  "<<this->getName()<<" was called"<<std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout << "Copy constructor ScavTrap is called\n";
	*this = obj;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
    std::cout << "Copy assignment operator ScavTrap called" << std::endl;
    this->setName(obj.getName());
    this->setAttackDamage(obj.getAttackDamage());
    this->setEnergyPoints(obj.getEnergyPoints());
    this->setHitPoints(obj.getHitPoints());
	return  (*this);
}

void    ScavTrap::attack(const std::string& target)
{
	if (this->getHitPoints() < 1)
		std::cout<<this->getName()<<" died...";
    if (this->getEnergyPoints() > 0)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 1);
    	std::cout<<"ScavTrap "<<  this->getName()<< " attacks "<<target
    	<<", causing "<< this->getAttackDamage()<<" points of damage!"<<std::endl;
	}
	else
		std::cout << "There is no energy"<<std::endl;
}


void    ScavTrap::guardGate(void)
{
    std::cout<<"ScavTrap is now in Gate keeper mode"<<std::endl;
}