#include "easyfind.hpp"

int main()
{
	std::cout<<"=======Test with vector as container======"<<std::endl;

	std::vector<int> vector;
	std::vector<int>::iterator vIter;
	int	val = 5;
	for (int i = 0; i < 10; i++)
	{
		vector.push_back(i);
	}
	for (vIter = vector.begin(); vIter != vector.end(); vIter++)
		std::cout << *vIter << ' ';
	try
	{
		vIter = easyfind(vector, val);
		std::cout<<"\nFound element #"<< val <<" = "<< *vIter << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "\nElem: " << val << " error: ";
		std::cerr << e.what() << '\n';
	}
	
	std::cout<<"=======Test with list as container======"<<std::endl;
	std::list<int>				list;
	std::list<int>::iterator	lIter;

	for (int i = 10; i < 20; i++)
	{
		list.push_back(i);
	}
	for(lIter = list.begin(); lIter != list.end(); lIter++)
		std::cout << *lIter << ' ';
		try
		{
			lIter = easyfind(list, val);
			std::cout<<"\nFound element #"<< val <<" = "<< *vIter << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "\nElem: " << val << " error: ";
			std::cerr << e.what() << '\n';
		}		
}