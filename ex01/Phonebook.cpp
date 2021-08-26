#include "Phonebook.h"

void Phonebook::set_contact(Contact *value)
{
	contact = value;
}
void Phonebook::addContact(int &maxindex)
{

	contact[index - 1].fieldContact(index);
	(index)++;
}