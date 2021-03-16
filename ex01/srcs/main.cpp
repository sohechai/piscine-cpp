/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:48:02 by sohechai          #+#    #+#             */
/*   Updated: 2021/03/16 12:02:39 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/contact.class.hpp"

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

	i = 1;
	std::cout << "|     index|    prenom|nom de fam|    pseudo|" << std::endl;
	for (int index = 1; index <= nb_of_contact; index++)
	{
		std::cout << "|         " << index;
		std::cout << "|";
		resize(contact[index].first_name);
		resize(contact[index].last_name);
		resize(contact[index].nickname);
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
		std::cout << "You choose index number : " << i << std::endl;
		std::cout << "\e[1;35m...\033[0m" << std::endl;
		std::cout << "First name : " << contact[i].first_name << std::endl;
		std::cout << "Last name : " << contact[i].last_name << std::endl;
		std::cout << "Nickname : " << contact[i].nickname << std::endl;
		std::cout << "Login : " << contact[i].login << std::endl;
		std::cout << "Postal address : " << contact[i].postal_adress << std::endl;
		std::cout << "Email address : " << contact[i].email_adress << std::endl;
		std::cout << "Phone number : " << contact[i].phone_number << std::endl;
		std::cout << "Birthday date : " << contact[i].birthday_date << std::endl;
		std::cout << "Favorite meal : " << contact[i].favorite_meal << std::endl;
		std::cout << "Underwear color : " << contact[i].underwear_color << std::endl;
		std::cout << "Darkest secret : " << contact[i].darkest_secret << std::endl;
		std::cout << "\e[1;35m...\033[0m" << std::endl;
	}
	else if (i > nb_of_contact || i == 0)
		std::cout << "wrong index .." << std::endl;
	std::cout << std::endl << "you can now ADD, SEARCH or EXIT :" << std::endl;
	return ;
}

void		add_newcontact(int nb_of_contact, Phonebook *contact)
{
	std::cout << "Please, enter first name :" << std::endl;
	std::getline(std::cin,contact[nb_of_contact].first_name);
	std::cout << "Please, enter last name :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].last_name);
	std::cout << "Please, enter nick name :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].nickname);
	std::cout << "Please, enter login :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].login);
	std::cout << "Please, enter postal address :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].postal_adress);
	std::cout << "Please, enter email address :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].email_adress);
	std::cout << "Please, enter phone number :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].phone_number);
	std::cout << "Please, enter birthday date :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].birthday_date);
	std::cout << "Please, enter favorite meal :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].favorite_meal);
	std::cout << "Please, enter underwear color :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].underwear_color);
	std::cout << "Please, enter darkest secret :" << std::endl;
	std::getline(std::cin, contact[nb_of_contact].darkest_secret);
	std::cout << "You succesfuly added a new contact, you can now ADD, SEARCH or EXIT :" << std::endl;
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
				std::cout << "Can't add more than 8 contacts.." << std::endl;
			}
			else
			{
				std::cout << "\e[1;35mLoading .\033[0m" << std::endl;
				std::cout << "\e[1;35mLoading ..\033[0m" << std::endl;
				std::cout << "\e[1;35mLoading ...\033[0m" << std::endl;
				nb_of_contact++;
				add_newcontact(nb_of_contact, contact);
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
