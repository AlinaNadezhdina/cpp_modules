#ifndef CURE_HPP
# define CURE_HPP
# include <iostream>
# include "AMateria.hpp"

class Cure :public AMateria
{
public:
	Cure();
    Cure & operator = (const Cure &cure);
    Cure( const Cure &cure);
    ~Cure();

   	virtual Cure * clone() const ;
    void use(ICharacter &target);
};

#endif