# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aahsan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/22 10:09:04 by aahsan            #+#    #+#              #
#    Updated: 2021/08/22 12:37:46 by aahsan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
HEADER	= includes
GCC		= gcc -Wall -Wextra -Werror
FILE	= libft.a
RM		= rm -f

.c.o:
	${GCC} -c $< -o ${<:.c=.o} -I ${HEADER}

${FILE}:	${OBJS}
	ar rcs ${FILE} ${OBJS}

all:	${FILE}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${FILE}

re:	fclean all

.PHONY: all clean fclean re
