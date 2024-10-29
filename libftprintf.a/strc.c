/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:20:53 by pitran            #+#    #+#             */
/*   Updated: 2024/10/29 15:14:09 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

int	printstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count += printstr("(null)");
		return (count);
	}
	while (*str)
	{
		count += printchar(*str);
		str++;
	}
	return (count);
}
