#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target):Form("default presidentialForm", 25, 5)
{
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm() :Form("default presidentialForm", 25, 5)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &ppf)
		: Form(ppf.getName(), ppf.getGradeToSign(), ppf.getGradeToExecute())
{
	this->setIsSigned(ppf.getIsSigned()); 
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &ppf)
{
	if (this != &ppf)
	 this->setIsSigned(ppf.getIsSigned());
	
	return *this;
}

void	PresidentialPardonForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= this->getGradeToSign())
	{
		std::cout << "Presidential form is signed" << std::endl;
		this->setIsSigned(true);
	}
	else
		throw Form::GradeTooLowException();
}


void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	executePermitted(executor);
	std::cout << this->getTarget() << " has been pardoned by bureaucrat " \
	<< executor.getName() << std::endl;
}