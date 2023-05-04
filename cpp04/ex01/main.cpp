#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"
int main() 
{
	const Animal *Array[8];
	std::cout << "--------------" << std::endl;
    const Dog dog;
	std::cout << "--------------" << std::endl;
    const Cat cat;
	std::cout << "--------------" << std::endl;

	cat.showIdeaArr();
	std::cout << "=============" << std::endl;
    for (int i = 0; i < 8; ++i)
    {
		std::cout << "----- " << i + 1 << " -----" << std::endl;
		if (i < 4)	
			Array[i] = new Dog(dog);
		else
			Array[i] = new Cat(cat);
		std::cout << Array[i]->getType() << "\n";
		Array[i]->makeSound();
       
    }
    for (int i = 0; i < 8; ++i)
    {
        std::cout << "----- " << i + 1 << " -----" << std::endl;
        delete Array[i];
    }
    std::cout << "-------------" << std::endl;
    return (0); 
}