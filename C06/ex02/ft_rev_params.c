/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:51:03 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/03 13:55:49 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	while (--argc)
		put_str(argv[argc]);
	return (0);
}
