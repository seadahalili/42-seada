# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sehalili <sehalili@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/23 22:10:53 by sehalili          #+#    #+#              #
#    Updated: 2026/02/23 23:08:57 by sehalili         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= libft.a
INC		= includes

SRCS	= srcs/ft_putchar.c \
		  srcs/ft_swap.c \
		  srcs/ft_putstr.c \
		  srcs/ft_strlen.c \
		  srcs/ft_strcmp.c \
		  main.c

OBJS	= ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -I ${INC} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re