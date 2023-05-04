#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &rrf);
	RobotomyRequestForm operator=(const RobotomyRequestForm &shr);

    void beSigned(const Bureaucrat &bur);
    virtual void execute(Bureaucrat const &executor) const;
};
#endif