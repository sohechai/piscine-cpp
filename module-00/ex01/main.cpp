/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:48:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/19 15:28:52 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

void		resize(std::string str)
{
	str.resize(10, ' ');
	std::cout << str;
	std::cout << "|";
}

void		display_contact(int nb_of_contact, Phonebook *contact)
{
	int			i;
	std::string buffer;
	std::stringstream ss;

	i = 0;
	std::cout << "|     index|    prenom|nom de fam|    pseudo|" << std::endl;
	for (int index = 0; index < nb_of_contact; index++)
	{
		std::cout << "|         " << index + 1;
		std::cout << "|";
		resize(contact[index].get_first_name());
		resize(contact[index].get_last_name());
		resize(contact[index].get_nickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "\e[1;35m...\033[0m" << std::endl;
	std::cout << "\e[1;35m..\033[0m" << std::endl;
	std::cout << "\e[1;35m.\033[0m" << std::endl;
	std::cout << "wich index do you wanna see ? : " << std::endl;
	std::getline(std::cin, buffer);
	ss << buffer;
	ss >> i;
	if (i > 0 && i <= nb_of_contact)
	{
		i -= 1;
		std::cout << "You choose index number : " << i << std::endl;
		std::cout << "\e[1;35m...\033[0m" << std::endl;
		std::cout << "First name : " << contact[i].get_first_name() << std::endl;
		std::cout << "Last name : " << contact[i].get_last_name() << std::endl;
		std::cout << "Nickname : " << contact[i].get_nickname() << std::endl;
		std::cout << "Login : " << contact[i].get_login() << std::endl;
		std::cout << "Postal address : " << contact[i].get_postal_adress() << std::endl;
		std::cout << "Email address : " << contact[i].get_email_adress() << std::endl;
		std::cout << "Phone number : " << contact[i].get_phone_number() << std::endl;
		std::cout << "Birthday date : " << contact[i].get_birthday_date() << std::endl;
		std::cout << "Favorite meal : " << contact[i].get_favorite_meal() << std::endl;
		std::cout << "Underwear color : " << contact[i].get_underwear_color() << std::endl;
		std::cout << "Darkest secret : " << contact[i].get_darkest_secret() << std::endl;
		std::cout << "\e[1;35m...\033[0m" << std::endl;
	}
	else if (i > nb_of_contact || i == 0)
		std::cout << "wrong index .." << std::endl;
	std::cout << std::endl << "you can now ADD, SEARCH or EXIT :" << std::endl;
	return ;
}

Phonebook		add_newcontact(Phonebook contact)
{
	std::string buffer;

	std::cout << "Please, enter first name :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_first_name(buffer);

	std::cout << "Please, enter last name :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_last_name(buffer);

	std::cout << "Please, enter nick name :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_nickname(buffer);

	std::cout << "Please, enter login :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_login(buffer);

	std::cout << "Please, enter postal address :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_postal_adress(buffer);

	std::cout << "Please, enter email address :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_email_adress(buffer);

	std::cout << "Please, enter phone number :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_phone_number(buffer);

	std::cout << "Please, enter birthday date :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_birthday_date(buffer);

	std::cout << "Please, enter favorite meal :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_favorite_meal(buffer);

	std::cout << "Please, enter underwear color :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_underwear_color(buffer);

	std::cout << "Please, enter darkest secret :" << std::endl;
	std::getline(std::cin, buffer);
	contact.set_darkest_secret(buffer);

	std::cout << "You succesfuly added a new contact, you can now ADD, SEARCH or EXIT :" << std::endl;
	return (contact);
}

int		main(void)
{
	Phonebook		contact[8];
	std::string command;
	int			nb_of_contact;

	nb_of_contact = 0;
	std::cout << std::endl;
	std::cout << "\e[1;35mWelcome to your phonebook ! \033[0m" << std::endl;
	std::cout << std::endl;
	std::cout << "Please, enter a command (ADD, SEARCH or EXIT) : " << std::endl;
	while (getline(std::cin, command, '\n'))
	{
		if (command == "EXIT")
		{
			std::cout << std::endl;
			std::cout << "Bye, Bye .." << std::endl;
			return 0;
		}
		else if (command == "ADD")
		{
			if (nb_of_contact >= 8)
			{
				std::cout << "Can't add more than 8 contacts.." << std::endl << std::endl;
				std::cout << "Please, enter a command (ADD, SEARCH or EXIT) : " << std::endl;
			}
			else
			{
				std::cout << "\e[1;35mLoading .\033[0m" << std::endl;
				std::cout << "\e[1;35mLoading ..\033[0m" << std::endl;
				std::cout << "\e[1;35mLoading ...\033[0m" << std::endl;
				contact[nb_of_contact] = add_newcontact(contact[nb_of_contact]);
				nb_of_contact++;
			}
		}
		else if (command == "SEARCH")
		{
			if (nb_of_contact == 0)
				std::cout << "There is no contact on your phonebook .." << std::endl;
			else
			{
				std::cout << "\e[1;35m.\033[0m" << std::endl;
				std::cout << "\e[1;35m..\033[0m" << std::endl;
				std::cout << "\e[1;35m...\033[0m" << std::endl;
				display_contact(nb_of_contact, contact);
			}
		}
		else
			std::cout << "Wrong command, please enter ADD, SEARCH or EXIT :" << std::endl;
	}
	return 0;
}
