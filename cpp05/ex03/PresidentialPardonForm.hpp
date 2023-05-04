#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &ppf);
	PresidentialPardonForm operator=(const PresidentialPardonForm &shr);

    void beSigned(const Bureaucrat &bur);
    virtual void execute(Bureaucrat const &executor) const;
};
#endif