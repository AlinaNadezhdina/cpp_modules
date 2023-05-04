#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():_name("mr Smit"), _grade(150)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const std::string name, int grade):_name(name)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooLowException("Bureuacrat low grade error");
	}
	if (grade > 150)
	{
		throw Bureaucrat::GradeTooHighException("Bureuacrat high grade error");
	}
	this->_grade = grade;
}
Bureaucrat::Bureaucrat(const Bureaucrat &bur):_name(bur._name)
{
	*this = bur;
}

const std::string Bureaucrat::getName() const
{
	return this->_name;
}

int		Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::increaseGrade(int value)
{
	this->_grade+=value;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException("Bureauracrat increase grade error");
}

void	Bureaucrat::reduceGrade(int value)
{
	this->_grade-= value;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooLowException("Bureauracrat reduce grade error");
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &bur)
{
	//this->_name = bur._name;//нельзя так делать, почему?потому что _name - это const
	this->_grade = bur._grade;
	return *this;
}

std::ostream &operator << ( std::ostream &out, Bureaucrat const &bureaucrat ) 
{
    out << bureaucrat.getName() + ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &error):_errMsg(error)
{
	std::cout << "GradeTooHighException constructor call\n";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return (char *)"Caught GradeTooHighException\n";
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "GradeTooHighException destructor call\n";
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &error):_errMsg(error)
{
	std::cout << "GradeTooLowException constructor call\n";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return (char *)"Caught GradeTooLowException\n";
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "GradeTooLowException destructor call\n";
}

