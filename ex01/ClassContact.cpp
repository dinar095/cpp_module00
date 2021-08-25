/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 16:41:46 by desausag          #+#    #+#             */
/*   Updated: 2021/08/24 16:41:46 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClassContact.hpp"

void Contact::set_first_name(std::string value)
{
	first_name = value;
}

void Contact::set_last_name(std::string value)
{
	last_name = value;
}

void Contact::set_nickname(std::string value)
{
	nickname = value;
}

void Contact::set_phone_number(std::string value)
{
	phone_number = value;
}

void Contact::set_darkset_secret(std::string value)
{
	darkset_secret = value;
}

void Contact::set_id(std::string value)
{
	darkset_secret = value;
}

void Contact::fieldContact(int index)
{
	id = index;
	std::cout << "First name: ";
	std::getline(std::cin, first_name);

	std::cout << "Last name: ";
	std::getline(std::cin, last_name);

	std::cout << "Nickname: ";
	std::getline(std::cin, nickname);

	std::cout << "Phone_number: ";
	std::getline(std::cin, phone_number);

	std::cout << "Darkest secret: ";
	std::getline(std::cin, darkset_secret);
}
