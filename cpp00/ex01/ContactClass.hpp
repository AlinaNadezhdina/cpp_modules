#ifndef CPP_CONTACTCLASS_HPP
# define CPP_CONTACTCLASS_HPP
#include <iostream>
#include <string>

#ifndef COLOR

# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define F_BLUE		"\033[34m" 

#endif

enum    ContactData
{
    firstName,
    lastName,
    nickName,
    phoneNumber,
    darkestSecret
};

class Contact{
	private :
		std:: string data[5];
    public :
        Contact();
        ~Contact();

        void    SetFirstName(std::string word);
        void    SetLastName(std::string word);
        void    SetNickName(std::string word);
        void    SetPhoneNumber(std::string word);
        void    SetDarkestSecret(std::string word);
		void	SetDataConsole();

        std::string		GetFirstName() const;
        std::string		GetLastName() const;
        std::string		GetNickName() const;
        std::string		GetPhoneNumber() const;
        std::string		GetDarkestSecret() const;
		int				GetMaxSizeInfo() const;
        bool			IsEmptyContact() const;
};

#endif 