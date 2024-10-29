/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pitran <pitran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 14:06:52 by pitran            #+#    #+#             */
/*   Updated: 2024/10/29 15:15:56 by pitran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	printchar(int c);
int	printstr(char *str);
int	printdigit(long long nb, int base);
int	putptr(unsigned long long adress);
int	printptr(unsigned long long adress);
int	printuppx(long long nb);
int	printformat(char specifier, va_list ap);
int	ft_printf(const char *format, ...);

#endif
