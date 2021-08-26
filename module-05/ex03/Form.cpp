/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:17:04 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:41:05 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute, const std::string &target) : _name(name),
																							_gradeToSign(gradeToSign),
																							_gradeToExecute(gradeToExecute),
																							_signed(false),
																							_checkSign(0),
																							_target(target)
{
	try
	{
		if (gradeToSign < 1)
			Form::GradeTooHighException();
		if (gradeToSign > 150)
			Form::GradeTooLowException();
		if (gradeToExecute < 1)
			Form::GradeTooHighException();
		if (gradeToExecute > 150)
			Form::GradeTooLowException();
		else
			return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}

Form::~Form()
{
	return ;
}

Form& 						Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs._signed;
	}

	return (*this);
}

std::ostream&				operator << (std::ostream &o, Form const &i)
{
	o << i.getname() << ", grade to sign: " << i.getgradeToSign() << ", grade to execute: " << i.getgradeToExecute() << "." << std::endl;

	return (o);
}

std::string					Form::getname() const
{
	return (this->_name);
}

int							Form::getgradeToSign() const
{
	return (this->_gradeToSign);
}

int							Form::getgradeToExecute() const
{
	return (this->_gradeToExecute);
}

bool						Form::getSigned() const
{
	return (this->_signed);
}

bool						Form::getCheckSign() const
{
	return (this->_checkSign);
}

void						Form::increaseCheckSign()
{
	this->_checkSign += 1;

	return ;
}


void						Form::beSigned(const Bureaucrat &b)
{
	try
	{
		if (b.getgrade() <= this->_gradeToSign && this->_checkSign == false)
		{
			this->_signed = true;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}

void						Form::execute(Bureaucrat const &executor) const
{
	try
	{
		if (this->_signed == false)
			throw Form::FormSignedException();
		if (executor.getgrade() > getgradeToExecute())
			throw Form::GradeTooLowExceptionToExecute();
		if (executor.getgrade() <= getgradeToExecute())
			action(_target);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}