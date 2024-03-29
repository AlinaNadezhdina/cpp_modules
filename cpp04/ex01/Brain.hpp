#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &brain);
	Brain &operator=(const Brain &brain);
	void	showIdeas() const;
};
#endif