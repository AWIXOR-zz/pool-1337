/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 11:32:20 by eaouassa          #+#    #+#             */
/*   Updated: 2021/09/29 12:15:52 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (size)
		write(1, addr, 1);
	return (addr);
}
