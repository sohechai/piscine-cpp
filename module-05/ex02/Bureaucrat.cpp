/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:49 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/08 14:33:50 by sohechai         ###   ########lyon.fr   */
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
	f->beSigned(*this);
	try
	{
		if (f->getSigned() == true && f->getCheckSign() == 0)
		{
			std::cout << getname() << " signs " << f->getname() << std::endl;
			f->increaseCheckSign();
		}
		else
		{
			std::cout << getname() << " cannot sign because ";
			if (f->getgradeToSign() < this->_grade)
				throw Form::GradeTooLowException();
			// else if (f->getgradeToSign() >= this->_grade)
			// 	throw Form::GradeTooHighException();
			else
				throw Form::FormAlreadySignedException();
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}

void						Bureaucrat::executeForm(Form const &form)
{
	try
	{
		if (form.getSigned() == true && form.getgradeToExecute() >= this->_grade)
			std::cout << getname() << " executs " << form.getname() << "." << std::endl;
		form.execute(*this);
		// sinon ajouter un message d'erreur explicite (peut etre dans execute ? voir avec le main)
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}