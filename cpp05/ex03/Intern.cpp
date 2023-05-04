#include "Intern.hpp"

Intern::Intern()
{
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &intern)
{
	(void)intern;
	return *this;
}

Intern::Intern(const Intern &intern)
{
	(void)intern;
	*this = intern;
}

Form	*Intern::shrCreate(const std::string formTarget)
{
	std::cout<<"Intern created shrubbery creation form!"<<std::endl;
	return new ShrubberyCreationForm(formTarget);
}

Form	*Intern::roboCreate(const std::string formTarget)
{
	std::cout<<"Intern created robotomy request form!"<<std::endl;
	return new RobotomyRequestForm(formTarget);
}

Form	*Intern::presidCreate(const std::string formTarget)
{
	std::cout<<"Intern created presidential pardon form!"<<std::endl;
	return new PresidentialPardonForm(formTarget);
}

Form	*Intern::makeForm(const std::string formName, const std::string formTarget)
{
	Form *(Intern::*funcArray[3])(std::string) = {	&Intern::shrCreate,
													&Intern::roboCreate, 
													&Intern::presidCreate};

	std::string strName[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (size_t i = 0; i < 3; i++)
	{
		if (strName[i] == formName)
			return	(this->*funcArray[i])(formTarget);
	}
	throw "Error: form is not found\n";
}