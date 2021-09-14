/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/08 14:50:01 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int			main(void)
{
	Intern		stagiaire1;

	Form		*rrf = stagiaire1.makeForm("Robotomy request", "Bender");
	Form		*ppf = stagiaire1.makeForm("Presidential request", "Bendo");
	Form		*scf = stagiaire1.makeForm("Shrubbery request", "Allo");
	Form		*bug = stagiaire1.makeForm("Inconnu request", "Bug");

	Bureaucrat *boss;
	Bureaucrat *bob;
	Bureaucrat *sylvie;



	try
	{
		boss = new Bureaucrat("Boss", 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';

		return (0);
	}

	std::cout << *boss;

	try
	{
		bob = new Bureaucrat("Bob", 30);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete boss;

		return (0);
	}

	std::cout << *bob;

	try
	{
		sylvie  = new Bureaucrat("Sylvie", 3);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';

		delete boss;
		delete bob;

		return (0);
	}
	
	std::cout << *sylvie;

	std::cout << "-------------------------" << std::endl;
	// sign ok, execute ko
	boss->signForm(ppf);
	bob->executeForm(*ppf);
	std::cout << "-------------------------" << std::endl;
	// sign ok, execute ok,
	boss->signForm(rrf);
	sylvie->executeForm(*rrf);
	std::cout << "-------------------------" << std::endl;
	// sign ok execute ok sign ko
	boss->signForm(scf);
	sylvie->executeForm(*scf);
	boss->signForm(scf);

	delete bob;
	delete boss;
	delete sylvie;
	delete ppf;
	delete rrf;
	delete scf;
	delete bug;
}