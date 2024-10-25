/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:23:06 by pitran            #+#    #+#             */
/*   Updated: 2024/10/25 17:38:57 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printdigit(int nb, int base)
{
	int		count;
	char	*index;

	index = "0123456789abcdef";
	count = 0;
	if (nb < 0)
	{
		count += printchar('-');
		count += (printdigit(-nb, base) + 1);
	}
	if (nb < base)
		return count + printchar(index[nb]);
	else
	{
		count += printdigit(nb / base, base);
		count += printdigit(nb % base, base);
	}
	return (count);
}

int	printuppx(int nb)
{
	int		count;
	char	*index;

	index = "0123456789ABCDEF";
	count = 0;
	if (nb < 0)
	{
		count += printchar('-');
		count += (printuppx(-nb) + 1);
		return count;
	}
	if (nb < 16)
		printchar(index[nb]);
	else
	{
		count += printuppx(nb / 16);
		count += printuppx(nb % 16);
	}
	return (count);
}
