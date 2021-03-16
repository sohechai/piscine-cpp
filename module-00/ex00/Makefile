# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sohechai <sohechai@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/15 12:24:11 by sohechai          #+#    #+#              #
#    Updated: 2021/03/15 17:03:38 by sohechai         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME			=       megaphone

SRC				=		megaphone.cpp \

OBJ				=       $(SRC:.cpp=.o)

FLAGS			=       -Wall -Wextra -Werror

RM				=		rm -rf

all: $(NAME)

$(NAME): $(OBJ)
		@g++ $(FLAGS) $(OBJ) -o $@
		@echo "\033[95m \n\n./$(NAME) is ready to be executed\n"

clean:
		@${RM} ${OBJ}
		@echo "\033[91m\n./$(NAME) and *.o have been deleted\n\n$(NAME) is now clean

fclean: clean
		@${RM} ${NAME}

re: fclean all

.PHONY: all clean flclean re