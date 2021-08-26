#ifndef DAY00_PHONEBOOK_H
# define DAY00_PHONEBOOK_H
# include "ClassContact.hpp"


class Phonebook
{
private:
	Contact	*contact;
	unsigned int	index;
	unsigned int	count;
public:
	void	set_contact(Contact *value);
	void	addContact(unsigned int maxindex);
	void	showContacts();
	void	expandContact();
};


#endif
