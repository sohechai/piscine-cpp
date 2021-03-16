# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 13:35:52 by sohechai          #+#    #+#              #
#    Updated: 2021/03/16 13:21:44 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

SRCS		=	./contact.class.cpp \
				./main.cpp

HEADER		=	./contact.class.hpp

OBJS		=	$(SRCS:.cpp=.o)

GCC			=	clang++

FLAGS		=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	@$(GCC) $(OBJS) -o $@

%.o: %.cpp %.hpp
	@$(GCC) $(FLAGS) -o $@ -c $<
	@echo "\033[34m$(NAME): Loading... \033[0m"

clean:
	@rm -f $(OBJS)
	@echo "\033[91m[$(NAME)]:\033[31m Deleting *.o...\033[0m"
	@echo "\033[91m\n[$(NAME)]\033[31m is now clean\033[0m"

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean re
