#ifndef CPP_ZOMBIE_HPP
# define CPP_ZOMBIE_HPP
#include <iostream>
#include <string>

class Zombie{
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void    announce(void);
		void	setName(std::string name, int i);

};

Zombie*    zombieHorde( int N, std::string name );

#endif