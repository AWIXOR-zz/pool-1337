/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 11:15:35 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/02 12:01:15 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(char *s)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
		i++;
	if (i < 2)
		return (0);
	i = 0;
	while (s[i])
	{
		j = i + 1;
		if (s[i] == '-' || s[i] == '+')
			return (0);
		if (s[i] >= 9 && s[i] <= 13)
			return (0);
		while (s[j])
		{
			if (s[i] == s[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	is_belong(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	position(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	i;
	int	to_return;
	int	len_base;

	i = 0;
	while (base[i])
		i++;
	len_base = i;
	if (!is_valid(base))
		return (0);
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
	while (is_belong(str[i], base))
		to_return = to_return * len_base + position(str[i++], base);
	return (to_return * sign);
}
