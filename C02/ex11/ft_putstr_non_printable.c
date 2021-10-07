/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 15:56:58 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/29 11:25:45 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				mod;
	int				div;
	unsigned char	c;

	while (*str)
	{
		c = (unsigned char)*str;
		if (c >= 32 && c <= 126)
		{
			write(1, &c, 1);
			str++;
			continue ;
		}
		mod = "0123456789abcdef"[c % 16];
		div = "0123456789abcdef"[c / 16];
		write(1, "\\", 1);
		write(1, &div, 1);
		write(1, &mod, 1);
		str++;
	}
}
