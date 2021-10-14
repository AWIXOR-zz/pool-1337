/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 10:58:57 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/14 11:08:18 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int i;
	t_list *list;
	i = 0;
	list = begin_list;
	while(list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
#include <stdio.h>
int main()
{
	struct s_list *A;

	A = NULL;
	printf("%d", ft_list_size(A));
}
