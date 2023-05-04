#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
public: 
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const std::string name, int grade);
	Bureaucrat(const Bureaucrat &bur);
	Bureaucrat &operator=(const Bureaucrat &bur);
	

	const std::string	getName() const;
	int					getGrade() const;
	void				increaseGrade(int value);
	void				reduceGrade(int value);
	void				signForm(Form &form);

	void				executeForm(Form const & form);

	class GradeTooHighException: public std::exception
	{
		private:
			std::string _errMsg;
		public:
			GradeTooHighException(const std::string &error);
			~GradeTooHighException()throw();
			const char *what() const throw();
	};
	
	class GradeTooLowException: public std::exception
	{
		private:
			std::string _errMsg;
		public:
			GradeTooLowException(const std::string &error);
			~GradeTooLowException() throw();
			const char *what() const throw();
	};

};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bur);

#endif