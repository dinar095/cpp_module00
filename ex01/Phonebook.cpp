#include "Phonebook.h"

void Phonebook::set_contact(Contact *value)
{
	contact = value;
}
void Phonebook::addContact(int &index)
{
	contact[index - 1].fieldContact(index);
	(index)++;
}