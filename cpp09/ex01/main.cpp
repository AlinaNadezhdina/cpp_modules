#include "RPN.hpp"

int	main(int ac, char **av)
{
	int	rez;
	if (ac != 2)
	{
		std::cerr << "Error count of arguments" << std::endl;
		return (1);
	}
	RPN	rpn;
	rez = rpn.hundlerStr(av[1]);
	std::cout << rez << std::endl;
	return (0);
}