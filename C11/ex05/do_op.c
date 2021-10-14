/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:35:26 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/14 12:59:01 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "operations.h"

int	calc(int a, int b, char op)
{
	if (op == '+')
		return add(a, b);
	else if ( op == '-')
		return subst(a, b);
	else if ( op == '*')
		return multi(a, b);
	else if ( op == '/')
		return div(a, b);
	else if ( op == '%')
		return mod(a, b); 
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	op;
	int		result;

	if (ac != 4)
		return (0);
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	op = av[2][0];

	result = calc(a, b, op);

	return (result);
}
