# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 11:32:59 by eaouassa          #+#    #+#              #
#    Updated: 2021/10/13 16:50:58 by eaouassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
AR = ar
SRCS_P = ./srcs/
HEADER = ./includes/
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = rc
SRCS = $(SRCS_P)ft_putchar.c $(SRCS_P)ft_putstr.c $(SRCS_P)ft_strcmp.c $(SRCS_P)ft_strlen.c $(SRCS_P)ft_swap.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $*.c -I$(HEADER) -o $*.o

$(NAME) : $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
