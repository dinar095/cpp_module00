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
	this->first_name = value;
}

void Contact::set_last_name(std::string value)
{
	this->last_name = value;
}

void Contact::set_nickname(std::string value)
{
	this->nickname = value;
}

void Contact::set_phone_number(std::string value)
{
	this->phone_number = value;
}

void Contact::set_darkset_secret(std::string value)
{
	this->darkset_secret = value;
}

void Contact::count()
{
	this->id++;
}
