#include "iter.h"
#include "TestClass.hpp"

int main()
{
	std::cout<<"==============Int array test================="<<std::endl;
	int arr[] = {1, 2, 3, 4, 5};
	iter(arr, 5, print);
	std::cout<<"==============float array test================="<<std::endl;
	float arr1[] = {1.2, 2.3, -3.4, 4.5, -50.0};
	iter(arr1, 5, print);
	std::cout<<"==============string array test================="<<std::endl;
	std::string arr2[] = {"We", "wish", "you", "a merry", "christmas!"};
	iter(arr2, 5, print);
	std::cout<<"==============Objects array test================="<<std::endl;
	TestClass arr3[5] = {TestClass(3), TestClass(65), TestClass(-5), TestClass(17), TestClass(-100)};
	iter(arr3, 5, print);

	return (0);
}