/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:17:01 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:19:48 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <unistd.h>
# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form
{
	public:

	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &src);
	~Form();

	Form& 						operator=(Form const &rhs);

	std::string					getname() const;
	int							getgradeToSign() const;
	int							getgradeToExecute() const;
	bool						getSigned();
	void						beSigned(const Bureaucrat &b);


	class 						GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high");
			}
	};

	class 						GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low");
			}
	};

	private:

	Form(void);
	const std::string 			_name;
	const int							_gradeToSign;
	const int							_gradeToExecute;
	bool						_signed;
};

std::ostream&					operator << (std::ostream &o, Form const &i);

#endif

