/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:49 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/08 14:19:44 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 0)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
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
			throw GradeTooHighException();
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
			throw GradeTooLowException();
		else
			this->_grade += 1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}