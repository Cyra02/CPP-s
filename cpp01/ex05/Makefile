# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/03 12:52:56 by cyra              #+#    #+#              #
#    Updated: 2025/03/05 12:10:51 by ciestrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

CC = c++
RM = rm -f
CPPFLAGS = -Wall -Wextra -Werror -std=c++98

SRC	= 	main	\
		Harl \

SRCS =	$(addsuffix .cpp, $(SRC))
OBJ =	$(SRCS:%.cpp=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@$(CC) -c $(CFLAGS) $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re