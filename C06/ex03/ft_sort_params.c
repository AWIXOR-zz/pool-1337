/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 13:56:54 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/04 19:27:07 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_str(char *s)
{
	while (*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	sort_args(char **s, int size)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(s[i], s[j]) > 0)
			{
				temp = s[j];
				s[j] = s[i];
				s[i] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	sort_args(argv, argc);
	i = 1;
	while (i < argc)
		put_str(argv[i++]);
	return (0);
}
