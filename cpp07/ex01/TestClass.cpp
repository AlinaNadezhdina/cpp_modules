#include "TestClass.hpp"

TestClass::TestClass(int value) :_val(value){}

TestClass::~TestClass(){}

TestClass &TestClass::operator=(const TestClass &copy)
{
	if (this != &copy)
		this->_val = copy.getVal();
	return (*this);
}

TestClass::TestClass(const TestClass &copy)
{
	*this = copy;
}

int	TestClass::getVal() const
{
	return this->_val;
}

std::ostream &operator<<(std::ostream &os, const TestClass &testClass)
{
	os << testClass.getVal();
	return os;
}