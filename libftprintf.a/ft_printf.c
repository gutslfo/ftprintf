/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:34:22 by pitran            #+#    #+#             */
/*   Updated: 2024/10/29 15:48:00 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printformat(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += printchar(va_arg(ap, int));
	else if (specifier == 's')
		count += printstr(va_arg(ap, char *));
	else if (specifier == 'p')
		count += printptr(va_arg(ap, unsigned long long));
	else if ((specifier == 'd') || (specifier == 'i'))
		count += printdigit(va_arg(ap, int), 10);
	else if (specifier == 'u')
		count += printdigit(va_arg(ap, unsigned int), 10);
	else if (specifier == 'x')
		count += printdigit(va_arg(ap, unsigned int), 16);
	else if (specifier == 'X')
		count += printuppx(va_arg(ap, unsigned int));
	else
		count += printchar(specifier);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ap;

	count = 0;
	va_start (ap, format);
	while (*format)
	{
		if (*format == '%')
			count += printformat(*(++format), ap);
		else
			count += (write(1, format, 1));
		format++;
	}
	return (count);
}
