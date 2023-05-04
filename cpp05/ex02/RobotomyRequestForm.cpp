#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("default roboRequestForm", 72, 45)
{
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm() :Form("default roboRequestForm", 72, 45)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rrf)
		: Form(rrf.getName(), rrf.getGradeToSign(), rrf.getGradeToExecute())
{
	this->setIsSigned(rrf.getIsSigned()); 
}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm &rrf)
{
	if (this != &rrf)
	 this->setIsSigned(rrf.getIsSigned());
	
	return *this;
}

void	RobotomyRequestForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= this->getGradeToSign())
	{
		std::cout << "RobotomyRequest form is signed" << std::endl;
		this->setIsSigned(true);
	}
	else
		throw Form::GradeTooLowException();
}


void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::srand(std::time(nullptr));
	RobotomyRequestForm::executePermitted(executor);
	std::cout << "Makes some drilling noises..." << std::endl;
	if (rand() % 2 == 0) {
		std::cout << this->_target << " has been robotomized!" << std::endl;
	} else {
		std::cout << this->_target << " robotomy failed!" << std::endl;
	}
}