/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:21:05 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/14 15:39:17 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sorted_asc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0 )
			return (0);
		i++;
	}
	return (1);
}

int	is_sorted_desc(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0 )
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	return (is_sorted_desc(tab, length, f)
		|| is_sorted_asc(tab, length, f));
}
/*
int sortt(int a, int b)
{
	int i = 0;
	if (a < b)
		i = -1;
	else if (a == b)
		i = 0;
	else if (a > b)
		i = 1;
	return (i); 
}
#include <stdio.h>
int main()
{
	int tab[] ={3,2,1,2};

	printf("%d",ft_is_sort(tab, 4, sortt));
}*/
