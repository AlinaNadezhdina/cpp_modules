#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain	*_brain;
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &dog);
	Dog &operator=(const Dog &dog);
	virtual void	makeSound() const;
};
#endif