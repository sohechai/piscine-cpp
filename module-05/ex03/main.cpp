/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:53 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/25 21:28:50 by sohechai         ###   ########lyon.fr   */
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
	Bureaucrat *boss = new Bureaucrat("Boss", 1);
	Bureaucrat *bob = new Bureaucrat("Bob", 30);
	Bureaucrat *sylvie = new Bureaucrat("Sylvie", 3);

	Intern		stagiaire1;
	Form		*rrf = stagiaire1.makeForm("Robotomy request", "Bender");
	Form		*ppf = stagiaire1.makeForm("Presidential request", "Bendo");
	Form		*scf = stagiaire1.makeForm("Shrubbery request", "Allo");
	Form		*bug = stagiaire1.makeForm("Inconnu request", "Bug");


	try
	{
		if (bob->getgrade() < 1)
		{
			throw Bureaucrat::GradeTooHighException();
			delete bob;
		}
		else if (bob->getgrade() > 150)
		{
			throw Bureaucrat::GradeTooLowException();
			delete bob;
		}
		else
			std::cout << *bob;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		if (boss->getgrade() < 1)
		{
			throw Bureaucrat::GradeTooHighException();
			delete boss;
		}
		else if (boss->getgrade() > 150)
		{
			throw Bureaucrat::GradeTooLowException();
			delete boss;
		}
		else
			std::cout << *boss;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

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
	// std::cout << "-------------------------" << std::endl;
	// sign ko execute ko
	// bob->signForm(PPF);
	// sylvie->executeForm(*SCF);
	// boss->signForm(SCF);

	delete bob;
	delete boss;
	delete sylvie;
	delete ppf;
	delete rrf;
	delete scf;
	delete bug;
}