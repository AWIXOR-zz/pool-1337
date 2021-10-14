/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 11:35:03 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/14 12:20:19 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*mapped;

	i = 0;
	mapped = malloc(sizeof(int) * length);
	while (i < length)
	{
		mapped[i] = (*f)(tab[i]);
		i++;
	}
	return (mapped);
}
/*
#include <stdio.h>

int print (int n)
{
	return (n);
}
int main()
{
	int tab[] = {1,2,3,4};
	int i = 0;
	int *arr = ft_map(tab,4,&print);
	while(i < 5)
	{
		printf("%d", arr[i]);
		i++;
	}


}*/
