# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:45:55 by sohechai          #+#    #+#              #
#    Updated: 2021/08/26 20:37:00 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		=	./Bureaucrat.cpp				\
				./Form.cpp						\
				./PresidentialPardonForm.cpp	\
				./RobotomyRequestForm.cpp		\
				./ShrubberyCreationForm.cpp		\
				./main.cpp

GCC			= clang++

FLAGS		= -Wall -Werror -Wextra

all:
	clang++ -Wall -Wextra -Werror $(SRCS)

clean:
	@rm -f a.out
	@rm -f *_shrubbery

re:     clean all

.PHONY: all clean re