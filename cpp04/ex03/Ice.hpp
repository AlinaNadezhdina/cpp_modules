#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice: public AMateria
{
public:
	Ice();
    Ice &operator =(const Ice &ice);
    Ice(const Ice &ice);
    ~Ice();

   	virtual Ice * clone() const ;
    void use(ICharacter &target);
};
#endif