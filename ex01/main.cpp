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
	int index;

	index = 1;
	phone.set_contact(contact);
	while (1)
	{
		std::cout << "Please input action : ";
		std::cin >> buf;

		if (buf == "ADD")
			phone.addContact(index);
		else if (buf == "SEARCH")
			std::cout << "SEARCH\n";
		else if (buf == "EXIT")
			break;
	}
}