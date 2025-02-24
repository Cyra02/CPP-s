# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 12:33:30 by ciestrad          #+#    #+#              #
#    Updated: 2025/02/24 13:00:35 by ciestrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC =  c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf
NAME = zombie

SRCS = 	main.cpp \
		zombieHorde.cpp \
		Zombie.cpp 
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	${CC} ${CFLAGS} -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: all clean
	./$(NAME)

.PHONY: all clean fclean re run