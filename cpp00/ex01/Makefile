# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ciestrad <ciestrad@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/11 12:13:07 by ciestrad          #+#    #+#              #
#    Updated: 2025/02/11 12:32:46 by ciestrad         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC =  c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -rf
NAME = phonebook

SRCS = Contact.cpp\
	   PhoneBook.cpp\
	   main.cpp
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