/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:49:21 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/03 19:59:16 by eaouassa         ###   ########.fr       */
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
	int		i;
	char	*s;

	i = 1;
	while (i < argc)
	{
		s = argv[i];
		put_str(s);
		i++;
	}
	return (0);
}
