#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
int main() 
{
	const Animal* meta = new Animal();
	std::cout<<"----------------------" << std::endl;
	const Animal* j = new Dog();
	std::cout<<"----------------------" << std::endl;
	const Animal* i = new Cat();
	std::cout<<"----------------------" << std::endl;
	const WrongAnimal *wrMeta = new WrongAnimal();
	std::cout<<"----------------------" << std::endl;
	const WrongAnimal *wc = new WrongCat();
	std::cout<<"----------------------" << std::endl;

	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrMeta->getType() << " " << std::endl; 
	std::cout << wc->getType() << " " << std::endl; 
	i->makeSound(); //will output the cat sound! 
	j->makeSound();
    meta->makeSound();
	wrMeta->makeSound();
	wc->makeSound();
	std::cout<<"----------------------" << std::endl;
	delete i;
	std::cout<<"----------------------" << std::endl;
	delete j;
	std::cout<<"----------------------" << std::endl;
	delete meta;
	std::cout<<"----------------------" << std::endl;
	delete wc;
	std::cout<<"----------------------" << std::endl;
	delete wrMeta;
	std::cout<<"----------------------" << std::endl;


	return 0; 
}