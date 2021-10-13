/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:14:00 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/12 19:24:38 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_lower(char c)
{
	if (c>='a' && c<='z')
		return (1);
	return (0);
}
int is_upper(char c)
{
	if (c>='A' && c<='Z')
		return (1);
	return (0);
}
int main(int ac, char **av)
{

	if(ac !=2)
	{
		write(1, "\n", 1);
		return (0);
	}

	char *s = av[1];
	int off;
	int i = 0;
	char p;
	while(s[i])
	{
		if(is_lower(s[i]))
		{
			off = s[i] - 'a';
			p = 'z' - off;
			write(1, &p, 1);
		}
		else if(is_upper(s[i]))
		{
			off = s[i] - 'A';
			p = 'Z' - off;
			write(1, &p, 1);
		}
		else
		{
			write(1,&s[i],1);
		}
		i++;
	}
	write(1, "\n", 1);
}
