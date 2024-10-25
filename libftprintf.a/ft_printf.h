/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:06:52 by pitran            #+#    #+#             */
/*   Updated: 2024/10/25 17:07:00 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<unistd.h>
# include	<stdarg.h>

int	printchar(int c);
int	printstr(char *str);
int	printdigit(int nb, int base);
int	printuppx(int nb);
int	printformat(char specifier, va_list ap);
int	ft_printf(const char *format, ...);

#endif
