/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrev.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 15:16:37 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/13 16:05:05 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return(i);
}
char *ft_strrev(char *str)
{
	int i = 0;
	int size = ft_strlen(str);
	char temp;

	while (i < (size / 2))
	{
		printf("%d\n", i);
		temp = str[i];
		str[i] = str[size - 1 - i];
		str[size - i - 1] = temp;
		i++;
	}
	return (str);
}
int main()
{
	char s[] ="hello";
	ft_strrev(s);
	printf("%s\n", s);
	printf("Done");
}
