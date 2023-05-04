#include "Bureaucrat.hpp"

int main()
{
	std::cout<<"==========================="<<std::endl;
	try
	{
		Bureaucrat bur1("Sam", 32);
		std::cout<<bur1<<std::endl;
		Bureaucrat bur2("Smit", -1);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what();
	}
	std::cout<<"==========================="<<std::endl;
	try
	{
		Bureaucrat bur3("Wault", 188);
		std::cout<<bur3<<std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what();
	}
	std::cout<<"==========================="<<std::endl;


	try
	{
		Bureaucrat burIncr("Bob", 100);
		std::cout<<burIncr<<std::endl;
		burIncr.increaseGrade(60);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what();
	}
	std::cout<<"==========================="<<std::endl;


	try
	{
		Bureaucrat burReduce("Jack", 100);
		std::cout<<burReduce<<std::endl;
		burReduce.reduceGrade(100);
	}
	catch(Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << e.what();
	}
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what();
	}
	std::cout<<"==========================="<<std::endl;

	return 0;
}
