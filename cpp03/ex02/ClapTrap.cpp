#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "UncleVasya";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
    std::cout<<"Default constructor was called"<<std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), 
	_energyPoints(10), _attackDamage(0)
{
    std::cout<<"Constructor of "<<this->_name<<" was called"<<std::endl;
	this->printInfo();
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout<<"Destructor ClapTrap of "<<this->_name<<" was called"<<std::endl;
}

ClapTrap    &ClapTrap::operator=(const ClapTrap &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_name = obj.getName();
    this->_attackDamage = obj.getAttackDamage();
    this->_energyPoints = obj.getEnergyPoints();
    this->_hitPoints = obj.getHitPoints();
	return  (*this);
}

std::string ClapTrap::getName(void) const
{
    return this->_name;
}

int ClapTrap::getAttackDamage(void) const
{
    return this->_attackDamage;
}

int ClapTrap::getEnergyPoints(void) const
{
    return this->_energyPoints;
}

int ClapTrap::getHitPoints(void) const
{
    return this->_hitPoints;
}

void    ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints < 1)
		std::cout<<this->_name<<" died...";
    if (this->_energyPoints > 0)
    {
		this->_energyPoints--;
    	std::cout<<"ClapTrap "<< this->_name<< " attacks "<<target
    	<<", causing "<< this->_attackDamage<<" points of damage!"<<std::endl;
	}
	else
		std::cout << "There is no energy"<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		 if (static_cast<unsigned int>(this->_hitPoints) < amount)
		 	this->_hitPoints = 0;
		  if (static_cast<unsigned int>(this->_hitPoints) > amount)
        this->_hitPoints -= amount;
    
    	std::cout<< this->_name << " received "<< amount<<" points of damage!"<<std::endl;

	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints < 1)
	{
		std::cout<<this->_name<<" died...";
		return ;
	}
	if (this->_hitPoints < 10)
	{
		if (this->_hitPoints + amount > 10)
			this->_hitPoints = 10;
		else
			this->_hitPoints += amount;
	}		
	this->_energyPoints--;
	std::cout << this->_name << " recovered with "<<amount<<" points"<<std::endl;
}  

void ClapTrap::printInfo() 
{
	std::cout << "name: " << this->_name << " hp: " << this->_hitPoints << " energy: " <<
	this->_energyPoints << std::endl;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void	ClapTrap::setHitPoints(unsigned int hitpoints)
{
	this->_hitPoints = hitpoints;
}

void	ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->_attackDamage = attackDamage;
}