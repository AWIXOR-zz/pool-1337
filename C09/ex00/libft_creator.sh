# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 14:13:17 by eaouassa          #+#    #+#              #
#    Updated: 2021/10/10 14:26:39 by eaouassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Werror -Wextra ft_putstr.c ft_putchar.c ft_strlen.c ft_strcmp.c ft_swap.c
ar rc libft.a ft_putstr.o ft_putchar.o ft_strlen.o ft_strcmp.o ft_swap.o 
rm -f *.o
