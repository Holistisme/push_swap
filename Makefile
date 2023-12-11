# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aheitz <aheitz@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/11 15:51:28 by aheitz            #+#    #+#              #
#    Updated: 2023/12/11 16:07:58 by aheitz           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
CFLAGS = -Wall -Wextra -Werror

SRCS = push_swap.c

#SRCS_BONUS = push_swap_bonus.c

OBJS = ${SRCS:.c=.o}
#OBJS_BONUS = ${SRCS_BONUS:.c=.o}

all: ${NAME}

${NAME} : {$OBJS}
	${AR} rcs ${NAME} ${OBJS}

#bonus: ${OBJS} ${OBJS_BONUS}
#	${AR} rcs ${NAME} ${OBJS} ${OBJS_BONUS}

clean:
	${RM} {OBJS}
#		{OBJS_BONUS}

fclean: clean
	${RM} ${NAME}

.PHONY: all bonus clean fclean re