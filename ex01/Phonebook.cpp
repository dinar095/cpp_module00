#include <cstdlib>
#include "Phonebook.h"

void Phonebook::set_contact(Contact *value)
{
	contact = value;
	index = 1;
	count = 0;
}

void Phonebook::addContact(unsigned int maxindex)
{
	contact[index - 1].fieldContact(index);
	index++;
	if (count < maxindex)
		count++;
	if (index > maxindex)
		index = 1;
}

void Phonebook::showContacts()
{
	std::cout << "=================================================" << std::endl;
	std::cout << std::right << std::setw(10) << "Index" << "|";
	std::cout << std::right << std::setw(10) << "First name" << "|";
	std::cout << std::right << std::setw(10) << "Last name" << "|";
	std::cout << std::right << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < count; i++)
		contact[i].preview();
	std::cout << "=================================================" << std::endl;
	std::cout << "Select contact index or leave blank for return" << std::endl;
	expandContact();
}

void Phonebook::expandContact()
{
	std::string	buf;
	unsigned int ind;

	ind = -1;
	while (std::cout << "Index: " && std::getline(std::cin, buf))
	{
		if (buf.empty())
			break;
		if ((ind = std::atoi(buf.c_str())) > 0 && ind <= count)
			contact[ind-1].view();
		else
			std::cout << "Invalid Index" << std::endl;
	}
}