#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

#define ASCII_TREE				      	\
"                   #\n"		      	\
"                  ***\n"		      	\
"                 *****\n"		      	\
"                *****~~\n"		      	\
"                 **~~~\n"		      	\
"                *~~~***\n"		      	\
"               ~~~******\n"	      	\
"              ~~*********\n"	      	\
"             *************\n"	     	\
"              ***********\n"	      	\
"             *************\n"	      	\
"            ***************\n"			\
"           *@***************\n"		\
"           ***@************@**\n"		\
"          *@****************@**\n"		\
"            @****************\n"		\
"           *******************\n"		\
"          *****@***************\n"		\
"         ***********************\n"	\
"        ********@****************\n"	\
"       *****************@*********\n"	\
"      *****************************\n"	\
"                  |||||\n"				\
"                  |||||   _8_8_\n"		\
"                  |||||  |  |  |_8_\n"	\
"                  |||||  |__|__|___|\n"\


class ShrubberyCreationForm: public Form
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &shr);
	ShrubberyCreationForm operator=(const ShrubberyCreationForm &shr);

    void beSigned(const Bureaucrat &bur);
    virtual void execute(Bureaucrat const &executor) const;
};
#endif