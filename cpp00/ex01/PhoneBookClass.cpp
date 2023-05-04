#include "PhoneBookClass.hpp"

PhoneBook::PhoneBook(void)
{
    this->countContact = 0;
}

        /*Destructor*/
PhoneBook::~PhoneBook(void)
{

}

void	PhoneBook::viewContacts(void) const
{
	std::cout << F_BLUE;
	std::cout << "+--------------------------------------+\n";
	std::cout << "|               PHONE BOOK             |\n";
	std::cout << "+--------------------------------------+\n";
	
	std::cout << "+--------------------------------------+\n";
	std::cout << "|Index| FirstName| LastName | NickName |\n";
	std::cout << "+--------------------------------------+\n";

	for (int i = firstName; i < this->countContact; i++)
	{
		std::cout <<"|"<< std::setw(5)<< i + 1 << "|";
		if (this->contacts[i].GetFirstName().length() > 10)
		{	
			std::cout << this->contacts[i].GetFirstName().substr(0, 9) << ".|";
		}
		else
		{	
			std::cout<<  std::setw(10) << this->contacts[i].GetFirstName() << "|";
		}
		if (this->contacts[i].GetLastName().length() > 10)
		{	
			std::cout << this->contacts[i].GetLastName().substr(0, 9) << ".|";
		}
		else
		{	
			std::cout<<  std::setw(10) << this->contacts[i].GetLastName() << "|";
		}

		if (this->contacts[i].GetNickName().length() > 10)
		{	
			std::cout<< this->contacts[i].GetNickName().substr(0, 9) << ".|";
		}
		else
		{	
			std::cout<<  std::setw(10) << this->contacts[i].GetNickName() << "|";
		}
		std::cout<< "\n";
		std::cout<< "+--------------------------------------+\n";
	}
}

void	PhoneBook::viewMiniTable(int max) const
{
	std::cout << "+";
	for (int i = 0; i <= max; i++)
	{
		std::cout << "-";
	}
	std::cout << "+\n";

}

void	PhoneBook::viewFullInfo(Contact contact) const
{
	int	max = contact.GetMaxSizeInfo() + 17;
	int	maxInfo = contact.GetMaxSizeInfo();

	std::cout << F_BLUE;
	viewMiniTable(max);
	std::cout << "|" <<"First name       |" << std::setw(maxInfo) << contact.GetFirstName() << "|\n";
	viewMiniTable(max);
	std::cout << "|" <<"Last name        |" << std::setw(maxInfo) << contact.GetLastName() << "|\n";
	viewMiniTable(max);
	std::cout << "|" <<"Nick name        |" << std::setw(maxInfo) << contact.GetNickName() << "|\n";
	viewMiniTable(max);
	std::cout << "|" <<"Phone nuber      |" << std::setw(maxInfo) << contact.GetPhoneNumber() << "|\n";
	viewMiniTable(max);
	std::cout << "|" <<"Darkest secret   |" << std::setw(maxInfo) << contact.GetDarkestSecret() << "|\n";
	viewMiniTable(max);
	std::cout << F_NONE;
}

void	PhoneBook::readNumContactFromConsole() const
{
	int	index;
	std::string num;

	std::cout << GREEN << "Please, enter contact number:\n";
	getline(std::cin, num);
	index = atoi(num.c_str());
	if (index <= 0 || index > this->countContact)
	{
		std::cout << RED << "Sorry, no such contact exists😭\n";
		std::cout << F_NONE;
		return ; 
	}
	else
		viewFullInfo(contacts[index - 1]);
}

void	PhoneBook::AddContact()
{
	int	cont_num = this->countContact;
	if (this->countContact == 8)
	{
		cont_num = 0;
	}
	std::cout << GREEN <<"Let's add a new contact\n";
	std::cout << F_NONE;
	this->contacts[cont_num].SetDataConsole();
	if (this->contacts[cont_num].IsEmptyContact() == true)
	{
		std::cout << RED <<"Sorry, you write empty contact😵‍💫 \n";
		std::cout << F_NONE;
		this->contacts[cont_num] = Contact();
		return ;
	}
	std::cout << F_BLUE; 
	this->countContact++;
	std::cout <<"Count contacts is "<< this->countContact << std::endl;
	std::cout << F_NONE;
}

void	PhoneBook::SearchContact(void) const
{
	if (this->countContact == 0)
	{
		std::cout << RED <<"Sorry, phone book is empty 😵‍💫\n";
		std::cout << F_NONE;
		return ;
	}
	viewContacts();
	readNumContactFromConsole();
}

