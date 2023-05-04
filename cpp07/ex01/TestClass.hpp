#ifndef TESTCLASS_HPP
# define TESTCLASS_HPP
#include <iostream>

class TestClass
{
private:
	int	_val;
public:
	TestClass(int value);
	~TestClass();
	TestClass(const TestClass &overl);
	TestClass &operator=(const TestClass &overl);

	int		getVal() const;
};

std::ostream &operator<<(std::ostream &os, const TestClass &testClass);
#endif