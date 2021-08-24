/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:24:33 by desausag          #+#    #+#             */
/*   Updated: 2021/08/24 12:24:33 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClassContact.hpp"

int main(void)
{
	std::string buf;
	Contact	contact[8];


	while (1)
	{
		std::cout << "Please input action : ";
		std::cin >> buf;
		if (buf == "ADD")
		{
			std::cout << "First name: \n";
			std::cin >> buf;



		}
		else if (buf == "SEARCH")
			std::cout << "SEARCH\n";
		else if (buf == "EXIT")
			break;
	}
}