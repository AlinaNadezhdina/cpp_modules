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
public:
	Form();
	~Form();
	Form(const std::string name, const int gradeToSign, const int gradeToExecure);
	Form(const Form &bur);
	Form &operator=(const Form &bur);
	const std::string	getName() const;
	int					getGradeToSign() const;
	int					getGradeToExecute() const;
	int					getIsSigned() const;
	void				beSigned(const Bureaucrat &bur);

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
//=================Вложенные классы конец=================//
};
std::ostream &operator<<(std::ostream &os, const Form &form);
#endif