/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:56:20 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/12 16:14:56 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha(char c)
{
	if ((c>='A' && c<='Z') || (c>='a' &&c<='z'))
			return (1);
	return (0);
}

int main(int ac, char **av)
{
	if(ac != 2)
	{
		write(1,"\n",1);
		return(0);
	}
	char *s = av[1];
	int i = 0;
	char p;
	while(s[i])
	{
		if (!is_alpha(s[i]))
		{
			write(1, &s[i],1);
			i++;
			continue;
		}
		if(s[i] == 'z' || s[i] == 'Z')
		{
			p = s[i] -  25;
			write(1,&p,1);
		}
		else
		{
			p = s[i] + 1;
			write(1, &p, 1);
		}
		i++;
	}
	return (0);
}
