/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 10:30:53 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/10 11:54:51 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct  s_stock_str *ft_strs_to_tab(int ac, char **av);

void	ft_print(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
	write(1, "\n", 1);
}

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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str[0])
	{
		//print str
		ft_print(par[i].str);
		//pritn size
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		//print copy
		ft_print(par[i].copy);
		i++;
	}
}
int main(int ac, char **av)
{
	struct s_stock_str *str = ft_strs_to_tab(ac-1, av+1); 
	ft_show_tab(str);
}
