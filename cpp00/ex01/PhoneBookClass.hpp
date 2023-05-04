#ifndef CPP_PHONEBOOKCLASS_HPP
# define CPP_PHONEBOOKCLASS_HPP
#include "ContactClass.hpp"
#include <iomanip>
#include <iostream>

#ifndef COLOR

# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define F_BLUE		"\033[34m" 

#endif

class PhoneBook
{
	private :
		Contact	contacts[8];
		int		countContact;
        void    viewMiniTable(int max) const;//??????
        void    viewContacts() const;
        void    viewFullInfo(Contact contact) const;
        void    readNumContactFromConsole() const;

    public :
        PhoneBook();
        ~PhoneBook();

        void    AddContact();
        void    SearchContact() const;
};

#endif 