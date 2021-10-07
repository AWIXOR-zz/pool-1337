/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 13:00:24 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/29 09:50:33 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_low(char c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	is_cap(char c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	is_num(char c)
{
	if ((c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_cap(str[i]))
			str[i] += 32;
		i++;
	}
	if (is_low(str[0]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (!is_low(str[i - 1]) && !is_cap(str[i - 1]) && !is_num(str[i - 1]))
		{
			if (is_low(str[i]))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
