#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>
# include <vector>

template <typename T>
typename T::iterator	easyfind(T &container, int val)
{
	typename T::iterator iter;
	if ((iter = std::find(container.begin(), container.end(), val)) == container.end())
		throw std::runtime_error("element is not found!");
	return (iter);
}
#endif