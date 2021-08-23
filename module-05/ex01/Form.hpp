/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:17:01 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/23 20:26:18 by sohechai         ###   ########lyon.fr   */
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
	Form(Form &src);
	~Form();

	Form& 						operator=(Form const &rhs);

	std::string					getname() const;
	int							getgradeToSign() const;
	int							getgradeToExecute() const;
	bool						getSigned();
	void						beSigned(Bureaucrat &b);


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

	const std::string 			_name;
	int							_gradeToSign;
	int							_gradeToExecute;
	bool						_signed;
};

std::ostream&					operator << (std::ostream &o, Form const &i);

#endif
