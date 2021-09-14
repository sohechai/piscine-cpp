/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:17:04 by sohechai          #+#    #+#             */
/*   Updated: 2021/09/08 14:27:24 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name),
																	_gradeToSign(gradeToSign),
																	_gradeToExecute(gradeToExecute),
																	_signed(false)
{
	if (gradeToSign < 1)
		throw	GradeTooHighException();
	if (gradeToSign > 150)
		throw	GradeTooLowException();
	if (gradeToExecute < 1)
		throw	GradeTooHighException();
	if (gradeToExecute > 150)
		throw	GradeTooLowException();

	return ;
}

Form::Form(const Form &src) : _gradeToSign(src.getgradeToSign()),
							_gradeToExecute(src.getgradeToExecute())
{
	*this = src;
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

bool						Form::getSigned()
{
	return (this->_signed);
}

void						Form::beSigned(const Bureaucrat &b)
{
	try
	{
		if (b.getgrade() <= this->_gradeToSign)
			this->_signed = true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return ;
}