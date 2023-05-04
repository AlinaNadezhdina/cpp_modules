#include "ContactClass.hpp"

Contact::Contact(void)
{
    this->data[firstName] = "-----";
    this->data[lastName] = "-----";
    this->data[nickName] = "-----";
    this->data[phoneNumber] = "-----";
    this->data[darkestSecret] = "-----";
}
Contact::	~Contact(void)
{

}

void	Contact::SetFirstName(std::string word)
{
	this->data[firstName] = word;
}

void	Contact::SetLastName(std::string word)
{
	this->data[lastName] = word;
}

void	Contact::SetNickName(std::string word)
{
	this->data[nickName] = word;
}

void	Contact::SetPhoneNumber(std::string word)
{
	this->data[phoneNumber] = word;
}

void	Contact::SetDarkestSecret(std::string word)
{
	this->data[darkestSecret] = word;
}

void	Contact::SetDataConsole()
{
	std::string word;

	std::cout << "Please, enter first Name:\n";
	std::getline(std::cin, word);
	this->SetFirstName(word);

	std::cout << "Please, enter last name:\n";
	std::getline(std::cin, word);
	this->SetLastName(word);

	std::cout << "Please, enter nickname:\n";
	std::getline(std::cin, word);
	this->SetNickName(word);

	std::cout << "Please, enter phone number:\n";
	std::getline(std::cin, word);
	this->SetPhoneNumber(word);

	std::cout << "Please, enter the darkest secret:\n";
	std::getline(std::cin, word);
	this->SetDarkestSecret(word);

	std::cout << GREEN;
	std::cout << "Thanks!👌 New contact is created!\n";
	std::cout << F_NONE;
}

std::string Contact::GetFirstName(void) const
{
	return (this->data[firstName]);
}

std::string Contact::GetLastName(void) const
{
	return (this->data[lastName]);
}

std::string Contact::GetNickName(void) const
{
	return (this->data[nickName]);
}

std::string Contact::GetPhoneNumber(void) const
{
	return (this->data[phoneNumber]);
}

std::string Contact::GetDarkestSecret(void) const
{
	return (this->data[darkestSecret]);
}

int Contact::GetMaxSizeInfo(void) const
{
	int	max = 0;
	for (int i = firstName; i <= darkestSecret; i++)
	{
		if ((int)this->data[i].length() > max)
			max += (int)this->data[i].length();
	}
	return (max);
}

bool Contact::IsEmptyContact(void) const
{
	int	len = 0;
	for (int i = firstName; i <= darkestSecret; i++)
	{
		len += this->data[i].length();
	}
	if (len == 0)
		return (true);
	return (false);
}  