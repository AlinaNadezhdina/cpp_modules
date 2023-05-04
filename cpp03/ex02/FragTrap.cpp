 #include "FragTrap.hpp"

 FragTrap::FragTrap()
 {
    std::cout<<"Default constructor FragTrap was called"<<std::endl;
    this->setName("UnclePetya");
	this->setHitPoints(100);
	this->setEnergyPoints(100);
	this->setAttackDamage(30);
 }

FragTrap::FragTrap(const  std::string name) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap " << name << " was called\n";
    this->setName(name);
    this->setHitPoints(100);
    this->setEnergyPoints(50);
    this->setAttackDamage(20);
}

FragTrap::~FragTrap()
{
    std::cout<<"Destructor FragTrap of  "<<this->getName()<<" was called"<<std::endl;
}

FragTrap::FragTrap(const FragTrap &obj) {
	std::cout << "Copy constructor FragTrap is called\n";
	*this = obj;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
    std::cout << "Copy assignment operator FragTrap called" << std::endl;
    this->setName(obj.getName());
    this->setAttackDamage(obj.getAttackDamage());
    this->setEnergyPoints(obj.getEnergyPoints());
    this->setHitPoints(obj.getHitPoints());
	return  (*this);
}

 void FragTrap::highFivesGuys(void)
{
    std::cout << "Guys HIGH FIVES TIME!" << std::endl;
}