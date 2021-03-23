/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 22:33:39 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/23 16:15:44 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook()
{
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

std::string 	Phonebook::get_first_name(void) const
{
	return (this->_first_name);
}
std::string 	Phonebook::get_last_name(void) const
{
	return (this->_last_name);
}
std::string 	Phonebook::get_nickname(void) const
{
	return (this->_nickname);
}
std::string 	Phonebook::get_login(void) const
{
	return (this->_login);
}
std::string 	Phonebook::get_postal_adress(void) const
{
	return (this->_postal_adress);
}
std::string 	Phonebook::get_email_adress(void) const
{
	return (this->_email_adress);
}
std::string 	Phonebook::get_phone_number(void) const
{
	return (this->_phone_number);
}
std::string 	Phonebook::get_birthday_date(void) const
{
	return (this->_birthday_date);
}
std::string 	Phonebook::get_favorite_meal(void) const
{
	return (this->_favorite_meal);
}
std::string 	Phonebook::get_underwear_color(void) const
{
	return (this->_underwear_color);
}
std::string 	Phonebook::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

void	Phonebook::set_first_name(std::string buffer)
{
	this->_first_name = buffer;
}
void	Phonebook::set_last_name(std::string buffer)
{
	this->_last_name = buffer;
}
void	Phonebook::set_nickname(std::string buffer)
{
	this->_nickname = buffer;
}
void	Phonebook::set_login(std::string buffer)
{
	this->_login = buffer;
}
void	Phonebook::set_postal_adress(std::string buffer)
{
	this->_postal_adress = buffer;
}
void	Phonebook::set_email_adress(std::string buffer)
{
	this->_email_adress = buffer;
}
void	Phonebook::set_phone_number(std::string buffer)
{
	this->_phone_number = buffer;
}
void	Phonebook::set_birthday_date(std::string buffer)
{
	this->_birthday_date = buffer;
}
void	Phonebook::set_favorite_meal(std::string buffer)
{
	this->_favorite_meal = buffer;
}
void	Phonebook::set_underwear_color(std::string buffer)
{
	this->_underwear_color = buffer;
}
void	Phonebook::set_darkest_secret(std::string buffer)
{
	this->_darkest_secret = buffer;
}
