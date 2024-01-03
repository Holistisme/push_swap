# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 18:52:24 by aheitz            #+#    #+#              #
#    Updated: 2023/11/15 14:04:50 by aheitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_hex.c ft_checkvar.c ft_impress.c

RWK_SRCS = reworked_libft/ft_putchar.c reworked_libft/ft_putnbr.c \
reworked_libft/ft_putstr.c reworked_libft/ft_strlen.c \
reworked_libft/ft_unsignedputnbr.c

OBJS = ${SRCS:.c=.o}

RWK_OBJS = ${RWK_SRCS:.c=.o}

all: ${NAME}

${NAME} : ${OBJS} ${RWK_OBJS}
	${AR} rcs ${NAME} ${OBJS} ${RWK_OBJS}

clean:
	${RM} ${OBJS} ${RWK_OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
