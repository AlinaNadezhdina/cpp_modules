#include "whatever.h"
#include "Overload.hpp"

int	main()
{
	int a = 2;
	int b = 3;

	ft_42::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ft_42::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ft_42::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	
	ft_42::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ft_42::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ft_42::max( c, d ) << std::endl;

	std::cout <<"=========With class========" << std::endl;
	Overload obj1(398);
	Overload obj2(78);

	ft_42::swap( obj1, obj2 );
	std::cout << "obj1 = " << obj1.getVal() << ", obj2 = " << obj2.getVal() << std::endl;
	std::cout << "min( obj1, obj2 ) = "<< ft_42::min( obj1, obj2 ).getVal() << std::endl;
	std::cout << "max( obj1, obj2 ) = " << ft_42::max( obj1, obj2 ).getVal() << std::endl;
	std::cout <<"============================" << std::endl;
	return 0;


    
    // std::cout <<"=======================" << std::endl;
    // std::cout << "after->intVal : " << after->intVal << ", after->strVal : " << after->strVal << std::endl;
	// std::cout <<"=======================" << std::endl;
}