/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 18:36:24 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/02 10:34:00 by eaouassa         ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	len_src;
	unsigned int	len_dest;
	unsigned int	len;

	len_src = len_of(src);
	len_dest = len_of(dest);
	if (!size)
		return (len_src);
	len = len_dest + len_src;
	i = len_dest;
	j = 0;
	if (size <= i)
		return (len_src + size);
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len);
}
