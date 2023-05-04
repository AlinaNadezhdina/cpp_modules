#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("default shr. form", 145, 137)
{
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm() :Form("default shr. form", 145, 137)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shr)
		: Form(shr.getName(), shr.getGradeToSign(), shr.getGradeToExecute())
{
	this->setIsSigned(shr.getIsSigned()); 
}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shf)
{
	if (this != &shf)
	 this->setIsSigned(shf.getIsSigned());
	
	return *this;
}

void	ShrubberyCreationForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() <= this->getGradeToSign())
	{
		std::cout << "Shrubbery form is signed" << std::endl;
		this->setIsSigned(true);
	}
	else
		throw Form::GradeTooLowException();
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	executePermitted(executor);


	std::ofstream outfile;
    outfile.open(this->_target + "_shrubbery");
    if (!outfile.is_open()) {
        std::cout << "Brrrrr!" << std::endl;
        throw std::ios::failure( "Error opening file!" );
    }
    outfile << ASCII_TREE<< std::endl;
	std::cout << ASCII_TREE << std::endl;
    outfile.close();
}