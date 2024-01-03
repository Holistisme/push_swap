# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:51:28 by aheitz            #+#    #+#              #
#    Updated: 2024/01/03 19:37:44 by aheitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c stack_initialization.c swap_instructions.c

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME} : {$OBJS}
	${AR} rcs ${NAME} ${OBJS}

clean:
	${RM} {OBJS}

fclean: clean
	${RM} ${NAME}

.PHONY: all bonus clean fclean re