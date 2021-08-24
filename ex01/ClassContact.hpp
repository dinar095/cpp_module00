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
class Contact
{
	static int id;
private:
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
	void 	count();
};
#endif