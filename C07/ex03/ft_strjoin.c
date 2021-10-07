/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 14:58:30 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/07 13:52:52 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	size_of(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	result_size(char **s, char *sep, int size)
{
	int	counter;
	int	sep_size;
	int	i;
	int	j;

	sep_size = size_of(sep);
	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (s[i][j++])
			counter++;
		if (i != size - 1)
			counter += sep_size;
		i++;
	}
	counter ++;
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		counter;
	int		i;
	int		j;
	char	*result;

	counter = result_size(strs, sep, size);
	result = malloc(sizeof(char) * counter);
	i = 0;
	counter = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			result[counter++] = strs[i][j++];
		if (i != size - 1)
		{
			j = 0;
			while (sep[j])
				result[counter++] = sep[j++];
		}
		i++;
	}
	result[counter] = 0;
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	char *s1 = "jhkhl";
	char *s2 = "abc";
	char *s3 = "edf";
	char *str[3] = {s1,s2,s3};
	char *res = ft_strjoin(3,str,"----");

	printf("%s",res);
}*/
