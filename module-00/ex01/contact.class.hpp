/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 18:44:22 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/16 19:32:42 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP
# include <iostream>
# include <sstream>
# include <iomanip>
# include <cstring>

class		Phonebook
{
	public:

	Phonebook(void);
	~Phonebook(void);

	std::string 	get_first_name(void) const;
	std::string 	get_last_name(void) const;
	std::string 	get_nickname(void) const;
	std::string 	get_login(void) const;
	std::string 	get_postal_adress(void) const;
	std::string 	get_email_adress(void) const;
	std::string 	get_phone_number(void) const;
	std::string 	get_birthday_date(void) const;
	std::string 	get_favorite_meal(void) const;
	std::string 	get_underwear_color(void) const;
	std::string 	get_darkest_secret(void) const;

	void			set_first_name(std::string buffer);
	void			set_last_name(std::string buffer);
	void			set_nickname(std::string buffer);
	void			set_login(std::string buffer);
	void			set_postal_adress(std::string buffer);
	void			set_email_adress(std::string buffer);
	void			set_phone_number(std::string buffer);
	void			set_birthday_date(std::string buffer);
	void			set_favorite_meal(std::string buffer);
	void			set_underwear_color(std::string buffer);
	void			set_darkest_secret(std::string buffer);

	private:

	std::string 	_first_name;
	std::string 	_last_name;
	std::string 	_nickname;
	std::string 	_login;
	std::string 	_postal_adress;
	std::string 	_email_adress;
	std::string 	_phone_number;
	std::string 	_birthday_date;
	std::string 	_favorite_meal;
	std::string 	_underwear_color;
	std::string 	_darkest_secret;
};

#endif