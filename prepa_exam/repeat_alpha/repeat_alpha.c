/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:11:13 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/12 15:24:24 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha(char c)
{
	if((c >='a' && c <= 'z') || (c>= 'A' && c<='Z'))
		return (1);
	return (0);
}
int main(int ac, char **av)
{
	if (ac<2)
	{
		write(1, "\n",1);
		return (0);
	}

	int i = 0;
	int j = 0;
	while(av[1][i])
	{
		j = av[1][i] - 'a' + 1;
		
		while (j)
		{
			if(!is_alpha(av[1][i]))
			{
				write(1, &av[1][i],1);
				break;
			}
			write(1, &av[1][i],1);
			j--;
		}
		i++;
	}
	write(1, "\n",1);
	return(0);
}
