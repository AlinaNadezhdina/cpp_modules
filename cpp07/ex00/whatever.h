#ifndef WHATEVER_H
# define WHATEVER_H
# include <iostream>

namespace ft_42
{

	template <typename T>
	void	swap(T &a, T &b)
	{
		T tmp = a;
		a = b;
		b = tmp;
	}

	/*
	min: Compares the two values passed in its arguments and returns the smallest one. 
	If the two of them are equal, then it returns the second one.
	*/
	template <typename T>
	T		min(const T &a, const  T &b)
	{
		if (a < b)
			return a;
		else
			return b;
	}

	template <typename T>
	T		max(const T &a, const  T &b)
	{
		if (a > b)
			return a;
		else
			return b;
	}
}



#endif