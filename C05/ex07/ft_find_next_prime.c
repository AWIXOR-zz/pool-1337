/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 12:31:49 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/03 18:43:51 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	est;
	int	next_est;

	est = nb / 2;
	next_est = (est + nb / est) >> 1;
	while (next_est < est)
	{
		est = next_est;
		next_est = (est + nb / est) >> 1;
	}
	return (est);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	sq;

	if (nb < 2)
		return (0);
	sq = ft_sqrt(nb);
	i = 2;
	while (i <= sq)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
