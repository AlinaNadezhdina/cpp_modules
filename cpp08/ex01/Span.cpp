#include "Span.hpp"

Span::Span():_maxCount(), _arr()
{}

Span::Span(unsigned int maxCount): _maxCount(maxCount), _arr()
{}

Span::~Span()
{}

Span::Span(const Span &copy)
{
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)	
	{
		this->_maxCount = copy._maxCount;
		this->_arr = copy._arr;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (_arr.size() + 1 > _maxCount)
		throw std::out_of_range("Span is full");
	else
	{
		_arr.push_back(num);
	}
}

int		Span::shortestSpan()
{
	if (_arr.size() <= 1)
		throw std::out_of_range("Too few elements");
	std::sort(_arr.begin(), _arr.end());
	std::vector<int>::iterator it1 = _arr.begin();
	std::vector<int>::iterator it2 = it1 + 1;
	int shortest = *it2 - *it1;
	
	while(it2 != _arr.end())
	{
		if (shortest > *it2 - *it1)
			shortest = *it2 - *it1;
		it1 = it2;
		it2 = it1 + 1;
	}
	return (shortest);
}

int		Span::longestSpan()
{
	if (_arr.size() <= 1)
		throw std::out_of_range("Too few elements");
	std::sort(_arr.begin(), _arr.end());
	std::vector<int>::iterator it1 = _arr.begin();
	std::vector<int>::iterator it2 = _arr.end() - 1;
	return (*it2 - *it1);
}

void	Span::printElements()
{
	std::vector<int>::iterator it1 = _arr.begin();
	while(it1 != _arr.end())
	{	
		std::cout<< *it1<< " ";
		it1++;
	}
	std::cout<< std::endl;
}

std::vector<int> Span::generateRandomVector(unsigned int from, unsigned int to, unsigned count) 
{
    std::vector<int> ret;
	srand(time(NULL));
    for (int i = 0; i < (int) count; i++) {
        ret.push_back(from + ( std::rand() % ( to - from + 1 ) ));
		//ret.push_back((std::rand() % ( to - from)));
    }
    return ret;
}

void	Span::addNumbersRange(unsigned int from, unsigned int to, int count)
{
	if ((int) ((this->_maxCount - _arr.size()) - count) >= 0 ) {
        std::vector<int> generatedVector = generateRandomVector(from, to, count);
        this->_arr.insert(_arr.end(), generatedVector.begin(), generatedVector.end());
    } else {
        throw std::length_error("Exception : Too many elements to add!");
    }
}
