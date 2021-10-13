/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:16:08 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/12 19:13:35 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_strlen(char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return (i);
}
int ft_belong(char *s, char *c)
{
	int i = 0;

	while(s[i])
	{
		if(s[i++] == c[0])
			return (1);
	}
	return (0);
}
void ft_putstr(char *s)
{
	while(*s)
	{
		write(1, s++, 1);
	}
}
int main(int ac, char **av)
{
	if (ac != 4 || ft_strlen(av[2]) > 1 || ft_strlen(av[3]) > 1)
	{
		write(1, "\n",1);
		return (0);
	}
	if (!ft_belong(av[1], av[2]))
	{
		ft_putstr(av[1]);
		write(1, "\n",1);
		return (0);
	}
	int i = 0;
	char *s = av[1];
	while(s[i])
	{
		if (s[i] == av[2][0])
			write(1, &av[3][0], 1);
		else 
			write(1, &s[i],1);
		i++;
	}
}
