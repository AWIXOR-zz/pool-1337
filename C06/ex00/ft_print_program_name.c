/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:35:22 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/04 15:51:40 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	(void)argc;
	i = 0;
	s = argv[0];
	while (s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
