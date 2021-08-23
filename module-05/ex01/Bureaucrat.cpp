/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:49 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/23 20:23:41 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	// try
	// {
	// 	if (this->_grade < 1)
	// 		throw GradeTooHighException(); // grade too low;
	// 	else if (this->_grade > 150)
	// 		throw Bureaucrat::GradeTooLowException();
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat &src)
{
	*this = src;

	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat& 				Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
		_grade = rhs._grade;
	return (*this);
}

std::ostream&			operator << (std::ostream &o, Bureaucrat const &i)
{
	o << i.getname() << ", bureaucrat grade " << i.getgrade() << "." << std::endl;

	return (o);
}

std::string					Bureaucrat::getname() const
{
	return (this->_name);
}


int							Bureaucrat::getgrade() const
{
	return (this->_grade);
}

void						Bureaucrat::increase()
{
	try
	{
		if (this->_grade - 1 > 150)
			throw GradeTooHighException(); // grade too high;
		else
			this->_grade -= 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}

void						Bureaucrat::decrease()
{
	try
	{
		if (this->_grade + 1 > 150)
			throw GradeTooLowException(); // grade too low;
		else
			this->_grade += 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}

void						Bureaucrat::signForm(Form *f) const
{
	try
	{
		if (f->getSigned() == true)
			std::cout << getname() << " signs form" << std::endl;
		else
			std::cout << getname() << " cannot sign because " << "<reason>";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}