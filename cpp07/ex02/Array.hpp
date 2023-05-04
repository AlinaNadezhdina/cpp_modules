#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <typename T>
class Array
{
private:
	unsigned int	_arraySize;
	T				*_tArray;

public:
	Array();
	Array(unsigned int n);
	~Array();
	Array(const Array & arr);
	Array &operator=(const Array & arr);
	T &operator[](const int index);

	unsigned int	getSize() const;
};



#endif