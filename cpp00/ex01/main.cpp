#include "PhoneBookClass.hpp"
#include "ContactClass.hpp"

int main(void)
{
    PhoneBook PhoneBook;
    std::string cmd;

    std::cout << GREEN << "Welcome to my amazing phone book!😎" << F_NONE << "\n";
	while (1)
    {
        std::cout << GREEN << "Please, choose one of three available commands ADD, SEARCH or EXIT" << F_NONE << std::endl;
        std::getline(std::cin, cmd);
        if (std::cin.eof())
        {
            std::cout << "GoodBye!😉\n";
            return (1);
        }	
        if (cmd == "ADD")
        {
            PhoneBook.AddContact();
        }
        else if (cmd == "SEARCH")
        {
            PhoneBook.SearchContact();
        }
        else if (cmd == "EXIT")
        {
            std::cout << "GoodBye!😉\n";
            return (0);
        }
        else
        {
            std::cout << RED << "Sorry, command was not found 🤔"<< F_NONE << "\n";
        }
    }
    return (0);
}