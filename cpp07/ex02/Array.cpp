#include "Array.hpp"

template <typename T>
Array<T>::Array():_arraySize(0), _tArray(0)
{}

template <typename T>
Array<T>::Array(unsigned int size):_arraySize(size)
{
	this->_tArray = new T[size];
}

template <typename T>
Array<T>::~Array()
{
	delete []this->_tArray;
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array<T> &copy)
{
	if (this->_tArray)
		delete []this->_tArray;
	this->_arraySize = copy._arraySize;
	this->_tArray = new T[this->_arraySize];
	for (unsigned int i = 0; i < this->_arraySize; i++)
	{
		this->_tArray[i] = copy._tArray[i];
	}
	return *this;
}

template <typename T>
Array<T>::Array(const Array<T> &copy)
{
	*this = copy;
}

template <typename T>
T	&Array<T>::operator[](const int index)
{
	if (index < 0 || index >= (int)this->_arraySize)
		throw std::out_of_range("MyError: out of range!!!");
	else
		return this->_tArray[index];
}

template <typename T>
unsigned int Array<T>::getSize() const
{
	return this->_arraySize;
}