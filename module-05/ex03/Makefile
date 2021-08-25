# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/23 16:45:55 by sohechai          #+#    #+#              #
#    Updated: 2021/08/23 16:46:17 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS		=	./Bureaucrat.cpp		\
				./main.cpp

GCC			= clang++

FLAGS		= -Wall -Werror -Wextra

all:
	clang++ -Wall -Wextra -Werror $(SRCS)

clean:
	@rm -f a.out

re:     clean all

.PHONY: all clean re