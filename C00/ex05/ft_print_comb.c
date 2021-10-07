/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 09:41:47 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/24 10:39:51 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	number1;
	int	number2;
	int	number3;

	number1 = '0';
	while (number1 <= '7')
	{
		number2 = number1 + 1;
		while (number2 <= '8')
		{
			number3 = number2 + 1;
			while (number3 <= '9')
			{
				write (1, &number1, 1);
				write (1, &number2, 1);
				write (1, &number3, 1);
				if (number1 != '7')
					write (1, ", ", 2);
				number3++;
			}
			number2++;
		}
		number1++;
	}
}
