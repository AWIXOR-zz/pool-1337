/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 10:49:16 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/29 10:50:48 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	len_of(char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;
	unsigned int	n;

	i = 0;
	n = size - 1;
	len = len_of(src);
	if (size == 0)
		return (len);
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
