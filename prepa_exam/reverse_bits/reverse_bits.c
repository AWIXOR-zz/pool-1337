/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 18:39:07 by eaouassa          #+#    #+#             */
/*   Updated: 2021/10/14 18:44:46 by eaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	char reverse_bits(unsigned char octet)
{
	int				i;
	unsigned	char result;
	i = 8;
	result = 0;
	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (result);
}
