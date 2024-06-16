/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:57:14 by lpierre-          #+#    #+#             */
/*   Updated: 2024/06/11 15:57:16 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	is_specifier(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i'
		|| c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	int		i;
	va_list	args;

	va_start(args, format);
	count = 0;
	i = 0;
	while (format[i] != 0)
	{
		if (format[i] == '%' && is_specifier(format[i + 1]))
		{
			count += print_args(args, format[i + 1]);
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
