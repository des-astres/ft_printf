/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:31:56 by lpierre-          #+#    #+#             */
/*   Updated: 2024/06/11 19:31:58 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	print_args(va_list args, const char sp)
{
	int	count;

	if (sp == 'c')
		count = ft_putchar_mod(va_arg(args, int));
	if (sp == 's')
		count = ft_putstr_mod(va_arg(args, char *));
	if (sp == 'd' || sp == 'i')
		count = ft_putnbr_mod(va_arg(args, int), 0);
	if (sp == 'x')
		count = putnbr_hexa(va_arg(args, unsigned int), "0123456789abcdef", 0);
	if (sp == 'X')
		count = putnbr_hexa(va_arg(args, unsigned int), "0123456789ABCDEF", 0);
	if (sp == 'u')
		count = ft_putnbr_unsigned(va_arg(args, unsigned int), 0);
	if (sp == '%')
		count = ft_putchar_mod(sp);
	if (sp == 'p')
		count = ft_putptr(va_arg(args, uintptr_t), 0);
	return (count);
}
