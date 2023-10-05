# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/12 18:49:12 by polmarti          #+#    #+#              #
#    Updated: 2023/09/12 18:49:19 by polmarti         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	libft.a

SRC		=	srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c \
			srcs/ft_swap.c

OBJ		=	$(SRC:.c=.o)

INCLUDES :=	includes/

CFLAGS	:=	-Werror -Wextra -Wall -I$(INCLUDES)

CC		:=	gcc #valor fix

all		:	$(NAME)

%.o:%.c Makefile includes/header.h #norma implicita
	$(CC) $(FLAGS) -I ./ -c $< -o $@

$(NAME)	:	$(OBJ)
			ar rcs $(NAME) $(OBJ) 

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -f $(NAME)

re		:	fclean all

.PHONY: all clean fclean re

