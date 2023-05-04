#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
public:
	WrongAnimal();
	virtual	~WrongAnimal();
	WrongAnimal(const std::string &type);
	WrongAnimal(const WrongAnimal &wrongAnimal);
	WrongAnimal &operator=(const WrongAnimal &wrongAnimal);
	void	makeSound() const;
	const	std::string	&getType() const;
protected:
	std::string _type;
};
#endif