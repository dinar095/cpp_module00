/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassContact.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: desausag <desausag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:04:17 by desausag          #+#    #+#             */
/*   Updated: 2021/08/24 13:04:17 by desausag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_CONTACT_H
# define CLASS_CONTACT_H

# include <string>
# include <iostream>
# include <iomanip>

class Contact
{
private:
	int id;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkset_secret;
public:
	void	set_first_name(std::string value);
	void	set_last_name(std::string value);
	void	set_nickname(std::string value);
	void	set_phone_number(std::string value);
	void	set_darkset_secret(std::string value);
	void 	set_id(std::string value);
	std::string get_first_name() {return first_name;}
	std::string get_last_name() {return last_name;}
	std::string get_nickname() {return nickname;}
	std::string get_phone_number() {return phone_number;}
	std::string get_darkset_secret() {return darkset_secret;}
	void preview();
	void view();
	void fieldContact(int index);
};
//using std::string;
#endif