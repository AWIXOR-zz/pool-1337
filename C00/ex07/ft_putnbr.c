/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   8.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 11:41:19 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/25 18:57:42 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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
