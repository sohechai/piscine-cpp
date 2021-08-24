/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/23 16:45:51 by sohechai          #+#    #+#             */
/*   Updated: 2021/08/23 18:34:52 by sohechai         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <unistd.h>

class	Bureaucrat
{
	public:

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat &src);
	~Bureaucrat();

	Bureaucrat& 				operator=(Bureaucrat const &rhs);

	std::string					getname() const;
	int							getgrade() const;
	void						increase();
	void						decrease();


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
	int							_grade;
};


std::ostream&			operator << (std::ostream &o, Bureaucrat const &i);

#endif