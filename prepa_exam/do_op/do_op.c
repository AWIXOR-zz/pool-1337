/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 10:28:11 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/13 10:43:13 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{

	if (ac != 4)
	{
		printf("\n");
		return(0);
	}
	int n1;
	char *op;
	int n2;
	int result;

	n1 = atoi(av[1]);
	n2 = atoi(av[3]);
	op = av[2];
	
	if(op[0] == '/')
		result = n1 / n2;
	else if (op[0] == '*')
		result = n1 * n2;
	else if(op[0] == '+')
		result = n1 + n2;
	else if (op[0] == '-')
		result = n1 - n2;
	else if (op[0] == '%')
		result = n1 % n2;
	else 
		return (0);
	printf("%d", result);
}
