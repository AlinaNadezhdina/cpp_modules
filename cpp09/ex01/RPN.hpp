#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <sstream>

class RPN {
private:
	std::stack<int>	_nbrStack;
	void	clearStack();
public:
	RPN();
	RPN&	operator=(const RPN &);
	RPN(const RPN &);
	~RPN();
	int	hundlerStr(char *);
};

#endif