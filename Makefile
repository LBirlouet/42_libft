# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/29 11:27:16 by lbirloue          #+#    #+#              #
#    Updated: 2023/08/29 11:27:16 by lbirloue         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror

INCLUDES	=	-I includes

SRCS		=	ft_atoi.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_tolower.c \
				ft_toupper.c \
				testmain.c

OBJS		=	$(addprefix srcs/, ${SRCS:.c=.o})

%.o:		%.c
	@${CC} ${CFLAGS} ${INCLUDES} -c $< -o $@

	@printf "\e[1;32m.\e[0;m"


${NAME}:	${OBJS}
	@${CC} ${CFLAGS} ${INCLUDES} $^ -o $@


all:		${NAME}


clean:
	rm -f ${OBJS}


fclean:		clean
	rm -f ${NAME}


re:			fclean all


.PHONY:		all clean fclean re