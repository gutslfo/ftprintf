/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:23:06 by pitran            #+#    #+#             */
/*   Updated: 2024/10/29 15:47:45 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printdigit(long long nb, int base)
{
	int		count;
	char	*index;

	index = "0123456789abcdef";
	count = 0;
	if (nb == INT_MIN || nb == LONG_MIN)
	{
		if (nb == INT_MIN)
			return (write(1, "-2147483648", 11));
		else
			return (write(1, "-9223372036854775808", 20));
	}
	if (nb < 0)
	{
		count += write (1, "-", 1);
		nb = -nb;
	}
	if (nb < base)
		return (count + printchar(index[nb]));
	else
	{
		count += printdigit(nb / base, base);
		count += printdigit(nb % base, base);
	}
	return (count);
}

int	printuppx(long long nb)
{
	int		count;
	char	*index;

	index = "0123456789ABCDEF";
	count = 0;
	if (nb == INT_MIN || nb == LONG_MIN)
	{
		if (nb == INT_MIN)
			return (write(1, "-2147483648", 11));
		else
			return (write(1, "-9223372036854775808", 20));
	}
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb < 16)
		return (count + printchar(index[nb]));
	else
		count += printuppx(nb / 16);
	count += printchar(index[nb % 16]);
	return (count);
}
