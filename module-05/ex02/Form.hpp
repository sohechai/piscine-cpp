/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 19:17:01 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/26 20:35:57 by sohechai         ###   ########lyon.fr   */
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

	Form(std::string name, int gradeToSign, int gradeToExecute, const std::string &target);
	Form(const Form &src);
	virtual ~Form();

	Form& 						operator=(Form const &rhs);

	std::string					getname() const;
	int							getgradeToSign() const;
	int							getgradeToExecute() const;
	bool						getSigned() const;
	bool						getCheckSign() const;
	void						beSigned(const Bureaucrat &b);
	void						execute(Bureaucrat const &executor) const;
	virtual void				action(const std::string &target) const = 0;
	void						increaseCheckSign();


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

	class 						GradeTooHighExceptionToExecute : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high to execute");
			}
	};

	class 						GradeTooLowExceptionToExecute : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low to execute");
			}
	};

	class 						FormSignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form isn't signed");
			}
	};

	class 						FormAlreadySignedException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form is already signed");
			}
	};

	private:

	Form();
	const std::string 			_name;
	const int					_gradeToSign;
	const int					_gradeToExecute;
	bool						_signed;
	int							_checkSign;
	const std::string			_target;
};

std::ostream&					operator << (std::ostream &o, Form const &i);

#endif
