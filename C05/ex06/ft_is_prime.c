/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 11:53:23 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/04 07:23:37 by eaouassa         ###   ########.fr       */
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
