/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 11:44:35 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/24 09:42:15 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int number)
{
	int	tmp;

	tmp = number / 10 + '0';
	write (1, &tmp, 1);
	tmp = number % 10 + '0';
	write (1, &tmp, 1);
}

void	ft_print_comb2(void)
{
	int	left_num;
	int	right_num;

	left_num = 0;
	right_num = 0;
	while (left_num < 99)
	{
		right_num = left_num + 1 ;
		while (right_num < 100)
		{
			print_number (left_num);
			write (1, " ", 1);
			print_number (right_num);
			if (left_num != 98)
			{
				write (1, ", ", 2);
			}
			right_num++;
		}
		left_num++;
	}
}
