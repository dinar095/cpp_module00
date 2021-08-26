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
	int maxindex;

	maxindex = 8;
	phone.set_contact(contact);
	while (1)
	{
		std::cout << "Please input action : ";
		std::getline(std::cin, buf);
		if (buf == "ADD")
			phone.addContact(maxindex);
		else if (buf == "SEARCH")
			std::cout << "SEARCH\n";
		else if (buf == "EXIT")
			break;
		else
			std::cout << "ADD - add new contact, SEARCH - search contact, EXIT - exit" << std::endl;
	}
}