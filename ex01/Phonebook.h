#ifndef DAY00_PHONEBOOK_H
# define DAY00_PHONEBOOK_H
# include "ClassContact.hpp"


class Phonebook
{
private:
	Contact	*contact;
public:
	void	set_contact(Contact *value);
	void	addContact(int &index);
};


#endif
