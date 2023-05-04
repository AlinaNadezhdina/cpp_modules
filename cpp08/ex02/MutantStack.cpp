#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack():std::stack<T>()
{}

template <typename T>
MutantStack<T>::~MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(MutantStack<T> const &copy):std::stack<T>(copy)
{
	std::cout<<"=======Copy constructor called========"<<std::endl;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack<T> const &copy)
{
	std::cout<<"======= operator= called========"<<std::endl;
	this->c = copy.c;
	return (*this);
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
	return (this->c.begin());
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
	return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::c_begin() const{
	return (this->c.c_begin());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::c_end() const{
	return (this->c.c_end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::r_begin(){
	return (this->c.r_begin());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::r_end(){
	return (this->c.r_end());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::cr_begin() const{
	return (this->c.cr_begin());
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::cr_end() const{
	return (this->c.cr_end());
}

