# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 12:54:38 by jervasti          #+#    #+#              #
#    Updated: 2021/11/04 14:07:47 by jervasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
FLAGS = -Wall -Wextra -Werror
SRC = ft_putstr.c ft_display_file.c ft_putchar.c
OBJ = ft_putstr.o ft_display_file.o ft_putchar.o
OPT = rm -rf

all:
	$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean:
	$(OPT) $(OBJ)

fclean: clean
	$(OPT) $(NAME)
