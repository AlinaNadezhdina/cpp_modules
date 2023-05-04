#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Intern  someRandomIntern;
		Form*   rrf;

		//rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf  = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout<<"=========================="<<std::endl;
		Bureaucrat bureaucrat("Zafod Beeblebrox", 4);
		bureaucrat.signForm(*rrf);
		bureaucrat.executeForm(*rrf);
		delete rrf;
		std::cout<<"=========================="<<std::endl;
	}
	catch(const char *str)
	{
		std::cerr<<str;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
