/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:53:38 by pitran            #+#    #+#             */
/*   Updated: 2024/10/29 15:12:17 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putptr(unsigned long long adress)
{
	char	*index;
	int		count;

	index = "0123456789abcdef";
	count = 0;
	if (adress >= 16)
		count += putptr(adress / 16);
	count += printchar(index[adress % 16]);
	return (count);
}

int	printptr(unsigned long long adress)
{
	int	count;

	count = 0;
	if (adress == 0)
		return (printstr("(nil)"));
	count += printstr("0x");
	count += putptr(adress);
	return (count);
}
