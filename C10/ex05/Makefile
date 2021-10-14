# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 11:32:59 by eaouassa          #+#    #+#              #
#    Updated: 2021/10/14 16:40:35 by eaouassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
CC = gcc
SRCS_P = ./srcs/
HEADER = ./includes/
CFLAGS = -Wall -Wextra -Werror
SRCS = $(SRCS_P)ft_atoi.c $(SRCS_P)operations.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS) ./includes/libft.h
	$(CC) $(CFLAGS) do-op.c -I$(HEADER) $(OBJS) -o $(NAME) 

%.o: %.c
	$(CC) $(CFLAGS) -c $*.c -I$(HEADER) -o $*.o

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
