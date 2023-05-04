#ifndef ITER_H
# define ITER_H
#include <iostream>

template <typename T>
void	iter(T *arrPtr, size_t length, void (*func)(T const &elem))
{
	for (size_t i = 0; i < length; i++)
	{
		func(arrPtr[i]);
	}
}

template< typename T >
void print( T const &x) 
{ 
	std::cout<< x << std::endl; 
	return; 
}


#endif