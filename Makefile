# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbesson <tbesson@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/30 16:49:59 by tbesson           #+#    #+#              #
#    Updated: 2022/01/28 17:04:13 by tbesson          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_PATH	= srcs
SRCS_NAME	= ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c args_text.c args_numbers.c args_hexa.c ft_nblen.c ft_putnbr_unsigned.c
OBJS_PATH	= objs
OBJS_NAME	= ${SRCS_NAME:.c=.o}
SRCS		= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS		= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))
NAME		= libftprintf.a
# NAME		= exec
HEADER		= includes/

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Wextra

.c.o:
		${CC} ${CFLAGS} -c $< -o $@  -I ${HEADER}

${NAME}:	${OBJS}
		ar -rcs	${NAME} ${OBJS}
# ${NAME}:	${OBJS}
# 		${CC} ${SRCS} ${CFLAGS} -o ${NAME}  -I ${HEADER}

$(OBJS_PATH)/%.o:	$(SRCS_PATH)/%.c
	@mkdir $(OBJS_PATH) 2> /dev/null || true
	$(CC) $(CFLAGS) -I ${HEADER} -o $@ -c $<

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
