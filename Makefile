# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:51:28 by aheitz            #+#    #+#              #
#    Updated: 2024/01/08 16:05:39 by aheitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
EXEC = push_swap
L_PRINTF = ft_printf/libftprintf.a
CFLAGS = -Wall -Wextra -Werror -g3

SRCS = stack_mgmt.c error_checking.c \
inst_swap.c inst_push.c inst_rotate.c inst_rev_rotate.c \

OBJS = ${SRCS:.c=.o}

all: ft_printf ${NAME} ${EXEC}

${NAME} : ${OBJS}
	${AR} rcs ${NAME} ${OBJS}

${EXEC} : main.o ${NAME}
	${CC} ${CFLAGS} main.o ${NAME} ${L_PRINTF} -o ${EXEC}

clean:
	${RM} ${OBJS} ${EXEC} main.o
	${MAKE} clean -C ft_printf

fclean: clean
	${RM} ${NAME}
	${MAKE} fclean -C ft_printf

ft_printf:
	${MAKE} -C ft_printf

re: fclean all

.PHONY: all clean fclean ft_printf re