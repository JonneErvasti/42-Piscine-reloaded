# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jervasti <jervasti@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 08:39:12 by jervasti          #+#    #+#              #
#    Updated: 2021/11/03 09:56:16 by jervasti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

HEADER_PATH = ./includes/

SRCS_PATH = ./srcs/

FLAGS = -Wall -Wextra -Werror

SRC = $(SRCS_PATH)ft_putchar.c $(SRCS_PATH)ft_putstr.c $(SRCS_PATH)ft_strcmp.c \
				$(SRCS_PATH)ft_strlen.c $(SRCS_PATH)ft_swap.c

OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: $(NAME)

$(NAME):
		$(CC) $(FLAGS) -c $(SRC) -I $(HEADER_PATH)
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -rf $(OBJ)

fclean: clean
		rm -rf $(NAME)

re: fclean all
