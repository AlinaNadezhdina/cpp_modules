#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
public:
	Animal();
	virtual	~Animal();
	Animal(const std::string &type);
	Animal(const Animal &animal);
	Animal &operator=(const Animal &animal);
	virtual	void		makeSound() const;
	const	std::string	&getType() const;
protected:
	std::string _type;
};
#endif