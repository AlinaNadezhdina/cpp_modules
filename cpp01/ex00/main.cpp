#include "Zombie.hpp"

int main(void)
{ 
    randomChump("Fred");

    Zombie *zombie = newZombie("John");
    zombie->announce();
   	delete(zombie);

    return (0);
}