/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:31:52 by desausag          #+#    #+#             */
/*   Updated: 2021/08/25 14:31:52 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Phonebook.h"

int main(void)
{
	std::string buf;
	Contact	contact[8];
	Phonebook phone;

	phone.set_contact(contact);
	while (1)
	{
		std::cout << "Please input action : ";
		std::getline(std::cin, buf);
		if (buf == "ADD" || buf == "add")
			phone.addContact(8);
		else if (buf == "SEARCH" || buf == "ss")
			phone.showContacts();
		else if (buf == "EXIT")
			break;
		else
			std::cout << "ADD - add new contact, SEARCH - search contact, EXIT - exit" << std::endl;
	}
}