# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/10 12:59:11 by eaouassa          #+#    #+#              #
#    Updated: 2021/10/10 13:17:20 by eaouassa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Werror -Wextra ft_putstr.c ft_putchar.c ft_strlen.c ft_strcmp.c ft_swap.c
ar -rc libft.a ft_putstr.c ft_putchar.c ft_strlen.c ft_strcmp.c ft_swap.c 
ranlib libft.a
rm -f *.o
