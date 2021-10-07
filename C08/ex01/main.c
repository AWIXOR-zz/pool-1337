/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:19:34 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/05 18:21:23 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_boolean.h"

void ft_putstr(char *str)
{
while (*str)
write(1, str++, 1);
}
t_bool ft_is_even(int nbr)
{
return ((EVEN(nbr)) ? TRUE : FALSE);
}
int main(int argc, char **argv)
{
(void)argv;
if (ft_is_even(argc - 1) == TRUE)
ft_putstr(EVEN_MSG);
else
ft_putstr(ODD_MSG);
return (SUCCESS);
}
