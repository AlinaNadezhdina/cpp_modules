#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10);
		sp.addNumbersRange(5, 100, 10);

		// sp.addNumber(6);
		// sp.addNumber(3);
		// sp.addNumber(17);
		// sp.addNumber(9);
		// sp.addNumber(11);

		sp.printElements();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0; 
}