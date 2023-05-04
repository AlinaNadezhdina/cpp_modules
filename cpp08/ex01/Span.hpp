#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
	unsigned int	 _maxCount;
	std::vector<int> _arr;
public:
	Span();
	Span(unsigned int _maxCount);
	Span(const Span &copy);
	Span &operator=(const Span &copy);
	~Span();

	void	addNumber(int num);
	int		shortestSpan();
	int		longestSpan();
	
	void	printElements();

	std::vector<int>	generateRandomVector(unsigned int from, unsigned int to, unsigned count);
	void				addNumbersRange(unsigned int from, unsigned int to, int count);


};
#endif