#ifndef INTERN_HPP
# define INTERN_HPP
#include <iostream>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	Form	*shrCreate(const std::string formTarget);
	Form	*roboCreate(const std::string formTarget);
	Form	*presidCreate(const std::string formTarget);
public:
	Intern();
	~Intern();
	Intern(const Intern &Intern);
	Intern &operator=(const Intern &Intern);

	Form	*makeForm(const std::string formName, const std::string formTarget);
};
#endif
