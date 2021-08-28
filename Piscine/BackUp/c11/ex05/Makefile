# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aahsan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 14:33:08 by aahsan            #+#    #+#              #
#    Updated: 2021/08/25 14:54:45 by aahsan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ./srcs/main.c ./srcs/operations.c
OBJS = ${SRCS:.c=.o}
HEADER = includes
NAME = do-op
RM = rm -f
GCC = gcc -Wall -Wextra -Werror

.c.o:
	${GCC} -c $< -o ${<:.c=.o} -I ${HEADER}

${NAME}:	${OBJS}
	 ${GCC} ${OBJS} -o ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re : fclean all

.PHONY: all clean fclean re .c.o
