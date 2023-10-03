# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/16 14:17:03 by pdelanno          #+#    #+#              #
#    Updated: 2023/08/16 15:17:29 by pdelanno         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp PhoneBook.cpp Contact.cpp

OBJS = $(SRC:.cpp=.o)

CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = minitel

all: $(NAME)

$(NAME): $(OBJS)
			@g++ $(OBJS) $(CPPFLAGS) -o $(NAME)
			@echo "\033[1;5mProgram is ready!\033[0m"
clean:
			@rm -f $(OBJS)

fclean: clean
			@rm -f $(NAME)
			@echo "\033[1mAll clean!\033[0m"

re: fclean all

.PHONY: all clean fclean re
