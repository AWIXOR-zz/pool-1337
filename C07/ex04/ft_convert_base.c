/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:08:03 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/07 10:30:19 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	is_belong(char c, char *base);
int	is_valid(char *s);
int	ft_is_space(char c);
int	position(char c, char *base);

int	number_len(int number, int len_base)
{
	int	nb_size;

	nb_size = (number <= 0) + 1;
	while (number)
	{
		number /= len_base;
		nb_size++;
	}
	return (nb_size);
}

char	*ft_convert_to_number(int number, char *base, int len_base_to)
{
	int		nb_size;
	char	*to_return;
	int		is_negative;

	is_negative = (number < 0);
	nb_size = number_len(number, len_base_to);
	to_return = malloc(sizeof(char) * nb_size);
	to_return[0] = '-';
	to_return[--nb_size] = 0;
	if (!is_negative)
		number *= -1;
	while (--nb_size >= is_negative)
	{
		to_return[nb_size] = base[number % len_base_to * -1];
		number /= len_base_to;
	}
	return (to_return);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	len_base_to;
	int	len_base_from;
	int	number;

	len_base_from = is_valid(base_from);
	len_base_to = is_valid(base_to);
	if (len_base_from < 2 || len_base_to < 2)
		return (0);
	number = ft_atoi_base(nbr, base_from);
	return (ft_convert_to_number(number, base_to, len_base_to));
}
/*
#include <stdio.h>
int main(void)
{
	printf("%s",ft_convert_base("-1111","01","0123456789abcdef"));
}*/
