# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ybringui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 15:57:16 by ybringui          #+#    #+#              #
#    Updated: 2023/03/10 16:50:29 by ybringui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =  lib/ft_putptr\
lib/ft_putchar_fd\
lib/ft_putstr_fd\
lib/ft_putnbr_fd\
lib/ft_putnbr_unsign_fd\
lib/ft_tolower\
lib/ft_toupper\
lib/ft_isalpha\
lib/ft_putnbr_base\
ft_printf\

SRCS =  $(addsuffix .c, ${SRC})

OBJS = ${SRCS:.c=.o}

FLAG = -Wall -Wextra -Werror

.c.o:
	gcc ${FLAG} -c $< -o ${<:.c=.o}

$(NAME):        ${OBJS}
	ar rc $(NAME) ${OBJS}

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
