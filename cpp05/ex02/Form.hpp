#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExecute;
protected:
    std::string _target;
public:
	Form();
	virtual ~Form();
	Form(const std::string name, const int gradeToSign, const int gradeToExecure);
	Form(const Form &bur);
	Form &operator=(const Form &bur);
	const std::string	getName() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	int					getIsSigned() const;
	std::string			getTarget() const;
	virtual void		beSigned(const Bureaucrat &bur);
	void 				setIsSigned(const bool sign);

	virtual void execute(Bureaucrat const & executor) const = 0;
	void executePermitted( Bureaucrat const & ) const;

//=================Вложенные классы=================//
	class GradeTooHighException: public std::exception
	{
		public:
			GradeTooHighException();
			~GradeTooHighException()throw();
			const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			GradeTooLowException();
			~GradeTooLowException() throw();
			const char *what() const throw();
	};
	class FormIsNotSignedException: public std::exception
	{
		public:
			FormIsNotSignedException();
			~FormIsNotSignedException()throw();
			const char *what() const throw();
	};
//=================Вложенные классы конец=================//
};
std::ostream &operator<<(std::ostream &os, const Form &form);
#endif