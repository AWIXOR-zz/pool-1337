/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 11:35:37 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/14 17:15:55 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr(int nb)
{
	int	mod;
	int	div;
	int	toprint;

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
	}
	else if (nb < 10)
	{
		toprint = nb + '0';
		write (1, &toprint, 1);
	}
	else
	{
		mod = nb % 10;
		div = nb / 10;
		ft_putnbr(div);
		ft_putnbr(mod);
	}
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	to_return;

	to_return = 0;
	i = 0;
	sign = 1;
	while (ft_is_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_num(str[i]))
		to_return = to_return * 10 + str[i++] - '0';
	return (to_return * sign);
}
