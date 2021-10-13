/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 09:35:57 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/13 10:05:51 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int is_space(char c)
{
	if((c>=9 && c<=13) || c == 32)
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
	int len;
	len = 0;
	while(s[len])
		len++;
	len--;
	printf("%d",len);
	while(is_space(s[len]))
		len--;
	char *to = &s[len+1];
	while(!is_space(s[len]) && len >= 0)
		len--;
	len++;	
	while (s[len] != *to)
	{
		write(1, &s[len++],1);
	}
	write(1, "\n", 1);
	return (0);
}
