#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
std::cout<<"================Test1==========="<<std::endl;
	try
	{
		Form form1("f1", 15, 10);
		std::cout<<form1<<std::endl;
		Bureaucrat bur1("Sam", 32);
		std::cout<<bur1<<std::endl;
		std::cout<<"==========================="<<std::endl;
		bur1.signForm(form1);  //form1.beSigned(bur1) - теперь вызывается в бюрократе
		std::cout<<"==========================="<<std::endl;
		bur1.reduceGrade(20);//form1.beSigned(bur1) -  вызывается в бюрократе
		bur1.signForm(form1);
		std::cout<<form1<<std::endl;
		std::cout<<bur1<<std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
std::cout<<"=======Test2============="<<std::endl;
	try
	{
		Form form2("f2", 152, 10);
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
std::cout<<"=========Test3=============="<<std::endl;
	try
	{
		Form form3("f3", -1, 10);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
std::cout<<"=========Test4============="<<std::endl;
	try
	{
		Form form4("f4", 149, 165);
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
std::cout<<"==========Test5============"<<std::endl;
	try
	{
		Form form5("f5", 15, 0);
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}
std::cout<<"==========================="<<std::endl;
	return 0;
}
