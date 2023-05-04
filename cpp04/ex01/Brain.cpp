#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < 100; i++){
		this->_ideas[i] = "HELLO" + std::to_string(i);
	}
    std::cout << "Default Brain constructor called!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor Brain called!" << std::endl;
}

Brain::Brain(const Brain &brain)
{
    std::cout << "Copy constructor Brain called!" << std::endl;
    for (int i = 0; i < 100; ++i)
        _ideas[i] = brain._ideas[i];
}

Brain &Brain::operator=(const Brain &brain)
{
    std::cout << "Assignment operator Brain called!" << std::endl;
    for (int i = 0; i < 100; ++i)
        _ideas[i] = brain._ideas[i];
    return (*this);
}

void Brain::showIdeas() const
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_ideas[i].size() != 0) 
			std::cout << this->_ideas[i] << "\n";
	}
}

