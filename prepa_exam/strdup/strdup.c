/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:07:19 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/13 15:15:37 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *s)
{
	int i= 0;
	while (s[i])
		i++;
	return (i);
}
char *ft_strdup(char *str)
{
	int size = ft_strlen(str);
	int i = 0;
	char *copy;
	copy = malloc(sizeof(char) * (size +1));
	while( i < size)
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = 0;
	return (copy);
}
#include <stdio.h>
int main()
{
	char *s = "sdfgdf*-dfgdfghello";
	char *d = ft_strdup(s);

	printf("%s",d);	
}
