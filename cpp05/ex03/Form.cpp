#include "Form.hpp"

Form::Form():_name("mr Smit"), _gradeToSign(30), _gradeToExecute(15)
{
	this->_isSigned = false;
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecure)
	:_name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecure)
{
	if (gradeToSign < 1)
	{
		throw Form::GradeTooLowException();
	}
	if (gradeToSign > 150)
	{
		throw Form::GradeTooHighException();
	}
	if (gradeToExecure < 1)
	{
		throw Form::GradeTooLowException();
	}
	if (gradeToExecure > 150)
	{
		throw Form::GradeTooHighException();
	}
	this->_isSigned = false;
}

Form::~Form()
{}

Form::Form(const Form &form)
	:_name(form._name), _gradeToSign(form._gradeToSign), _gradeToExecute(form._gradeToExecute)
{
	*this = form;
}

Form	&Form::operator=(const Form &form)
{
	//this->_name = bur._name;//нельзя так делать, почему?потому что _name - это const
	this->_isSigned = form._isSigned;
	return *this;
}

const std::string Form::getName() const
{
	return this->_name;
}

int		Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int		Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

int		Form::getIsSigned() const
{
	return this->_isSigned;
}

std::string Form::getTarget() const {
    return this->_target;
} 

void Form::setIsSigned(const bool isSigned ) {
    this->_isSigned = isSigned;
}

void	Form::beSigned(const Bureaucrat &bur)
{
	if (this->_gradeToSign >= bur.getGrade())//1 is higher than 2
	{
		this->_isSigned = true;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator << ( std::ostream &out, Form const &form ) 
{
	 out << form.getName() + ", target : " << form.getTarget()\
        << ", form grade to sign : " << form.getGradeToSign()\
        << ", grade to execute : " << form.getGradeToExecute()\
        << ", signed : " << form.getIsSigned() << std::endl;
	return out;
}

Form::GradeTooHighException::GradeTooHighException()
{
	//std::cout << "GradeTooHighException constructor call (Form)\n";
}

Form::GradeTooHighException::~GradeTooHighException() throw()
{
	//std::cout << "GradeTooHighException destructor call (Form)\n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return (char *)"Caught GradeTooHighException (Form)\n";
}

Form::GradeTooLowException::GradeTooLowException()
{
	//std::cout << "GradeTooLowException constructor call (Form)\n";
}

Form::GradeTooLowException::~GradeTooLowException() throw()
{
	//std::cout << "GradeTooLowException destructor call (Form)\n";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return (char *)"Caught GradeTooLowException (Form)\n";
}

Form::FormIsNotSignedException::FormIsNotSignedException()
{
	//std::cout << "FormIsNotSignedException constructor call\n";
}

Form::FormIsNotSignedException::~FormIsNotSignedException() throw()
{
	//std::cout << "FormIsNotSignedException destructor call\n";
}

const char *Form::FormIsNotSignedException::what() const throw()
{
	return (char *)"Caught FormIsNotSignedException\n";
}

void Form::executePermitted(Bureaucrat const & bureaucrat) const {
    if (!this->_isSigned) {
        throw Form::FormIsNotSignedException();
    }
    if (bureaucrat.getGrade() > this->getGradeToExecute()) {
        throw Form::GradeTooLowException();
    }
}