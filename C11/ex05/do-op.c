/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 12:35:26 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/14 17:51:16 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_puterr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(2, &s[i], 1);
		i++;
	}
}

int	check_zero(int b, char op)
{
	if (b != 0)
		return (1);
	if (op == '%')
	{
		ft_puterr("Stop : modulo by zero\n");
		return (0);
	}	
	if (op == '/')
	{
		ft_puterr("Stop : division by zero\n");
		return (0);
	}
	return (1);
}

int	calc(int a, int b, char op)
{
	if (op == '+')
		return (add(a, b));
	else if (op == '-')
		return (subst(a, b));
	else if (op == '*')
		return (multi(a, b));
	else if (op == '/')
		return (div(a, b));
	else if (op == '%')
		return (mod(a, b));
	return (0);
}

int	check_op(char op)
{
	if (op == '-' || op == '+'
		|| op == '/' || op == '*' || op == '%')
		return (1);
	return (0);
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
	if (av[2][1] != 0 || !check_op(op))
	{
		write(1, "0\n", 2);
		return (0);
	}
	if (check_zero(b, op) == 0)
		return (1);
	result = calc(a, b, op);
	ft_putnbr(result);
	write(1, "\n", 1);
	return (0);
}
