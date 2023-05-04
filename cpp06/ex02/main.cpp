#include "Base.hpp"

#ifndef COLOR
# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CYANE		"\033[36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[0;33m"
# define F_BLUE		"\033[34m" 
#endif

Base * generate(void)
{
	int c = std::rand() % 3;

	if (c == 0)
	{
		std::cout << GREEN;
		std::cout << "A generated" << std::endl;
		std::cout << F_NONE;
		return (new A);
	}
	if (c == 1)
	{
		std::cout << GREEN;
		std::cout << "B generated" << std::endl;
		std::cout << F_NONE;
		return (new B);
	}
	else
	{
		std::cout << GREEN;
		std::cout << "С generated" << std::endl;
		std::cout << F_NONE;
		return (new C);
	}
}

void identify(Base* p)
{
	if (!p)
		return ;
	A *a;
	B *b;
	C *c;
/*
динамическое приведение выполняет проверку во время запуска программы 
(чтобы гарантировать возможность выполнения конвертации), 
использование оператора dynamic_cast чуть снижает производительность программы.
*/
	a = dynamic_cast<A *>(p);
	b = dynamic_cast<B *>(p);
	c = dynamic_cast<C *>(p);

	if (a != NULL)
	{
		std::cout << GREEN;
		std::cout << "Type of pointer is A" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	else if (b != NULL)
	{
		std::cout << GREEN;
		std::cout << "Type of pointer is B" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	else if (c != NULL)
	{
		std::cout << GREEN;
		std::cout << "Type of pointer is С" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	std::cout << RED;
	std::cout << "Fail identify from pointer" << std::endl;
	std::cout << F_NONE;
}

void identify(Base& p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast<A &>(p);
		std::cout << GREEN;
		std::cout << "type of reference is A&" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	catch(std::exception & ex)
	{
		std::cout << RED;
		std::cout << ex.what() << std::endl;
		std::cout << "Fail  identify A& from reference Base&\n";
		std::cout << F_NONE;
	}
	try
	{
		b = dynamic_cast<B &>(p);
		std::cout << GREEN;
		std::cout << "type of reference is B&" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	catch(std::exception & ex)
	{
		std::cout << RED;
		std::cout << ex.what() << std::endl;
		std::cout << "Fail  identify B& from reference Base&\n";
		std::cout << F_NONE;
	}
	try
	{
		c = dynamic_cast<C &>(p);
		std::cout << GREEN;
		std::cout << "type of reference is C&" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	catch(std::exception & ex)
	{
		std::cout << RED;
		std::cout << ex.what() << std::endl;
		std::cout << "Fail  identify C& from reference Base&\n";
		std::cout << F_NONE;
	}
	
}

int	main()
{
	std::srand(time(0));

	std::cout << "generating pointer ..." << std::endl;
	Base	*temp_p = generate();

	std::cout << "identifying pointer:" << std::endl;
	identify(temp_p);
	std::cout << "==========================" << std::endl;

	std::cout << "generating reference ..." << std::endl;
	Base &temp_r = *generate();

	std::cout << "identifying reference:" << std::endl;
	identify(temp_r);
	std::cout << "==========================" << std::endl;

	std::cout << "generating wrong pointer ..." << std::endl;
	Base *fake_p = new Base();
	identify(fake_p);
	std::cout << "==========================" << std::endl;

	std::cout << "generating wrong reference ..." << std::endl;
	Base &fake_r = *new Base();
	identify(fake_r);
	std::cout << "==========================" << std::endl;




	return (0);

}