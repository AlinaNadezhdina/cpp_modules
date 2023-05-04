#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Zafod Beeblebrox", 4);

		ShrubberyCreationForm shr("Basic");//145, 137
		std::cout<<shr;
		std::cout<<"=========================="<<std::endl;
        bureaucrat.signForm(shr);
        bureaucrat.executeForm(shr);
		std::cout<<"=========================="<<std::endl;

		PresidentialPardonForm ppf("Basic");//25, 5
		std::cout<<ppf;
		std::cout<<"=========================="<<std::endl;
        bureaucrat.signForm(ppf);
        bureaucrat.executeForm(ppf);
		std::cout<<"=========================="<<std::endl;

		RobotomyRequestForm rrf("Basic");//72, 45
		std::cout<<rrf;
		std::cout<<"=========================="<<std::endl;
        bureaucrat.signForm(rrf);
        bureaucrat.executeForm(rrf);
		std::cout<<"=========================="<<std::endl;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
