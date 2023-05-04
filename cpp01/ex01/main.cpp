#include "Zombie.hpp"

int main(void)
{
	int count = 3;
	Zombie *zombArray = zombieHorde(count, "Bob");
	for (int i = 0; i < count; i++)
	{
		zombArray->announce();
	}
	delete []zombArray;
	return (0);
}