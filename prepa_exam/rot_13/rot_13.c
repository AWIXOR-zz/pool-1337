/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:39:35 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/12 15:49:52 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int is_alpha(char c)
{
	if((c>='A' && c<='Z') || (c >='a' && c<='z'))
		return (1);
	return (0);
}
int main(int ac, char **av)
{
	if (ac != 2)
	{
		write(1,"\n",1);
		return(0);
	}

	int i = 0;
	char p;
	char *s = av[1];
	while(s[i])
	{
		if (!is_alpha(s[i])){
			write(1,&s[i],1);
			i++;
			continue;
		}
		if ((s[i] >='A' && s[i]<='M')|| (s[i]>='a' && s[i]<='m'))
		{
			p = s[i] + 13;
			write(1, &p,1);
		}
		if ((s[i] >='N' && s[i]<='Z')|| (s[i]>='n' && s[i]<='z'))
		{
			p = s[i] - 13;
			write(1, &p,1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
