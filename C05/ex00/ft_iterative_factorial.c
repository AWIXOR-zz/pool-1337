/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:59:06 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/03 10:03:00 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fact;

	if (nb < 0)
		return (0);
	fact = 1;
	i = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	return (fact);
}
