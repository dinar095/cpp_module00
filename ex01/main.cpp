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
	int i;

	phone.set_contact(contact);
	std::cout << "ADD - add new contact, SEARCH - search contact, EXIT - exit" << std::endl;
	while (std::cout << "Please input action : " && std::getline(std::cin, buf))
	{
		if (buf == "ADD" || buf == "add")
			phone.addContact(8);
		else if (buf == "SEARCH" || buf == "search")
			phone.showContacts();
		else if (buf == "EXIT" || buf == "exit")
			break;
		else
			std::cout << "ADD - add new contact, SEARCH - search contact, EXIT - exit" << std::endl;
	}
}