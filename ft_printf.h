/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:52:29 by lpierre-          #+#    #+#             */
/*   Updated: 2024/06/11 15:52:31 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<unistd.h>
# include<stdarg.h>
# include<stdint.h>

int	ft_printf(const char *format, ...);
int	ft_putchar_mod(char c);
int	ft_putstr_mod(char *s);
int	ft_putnbr_mod(int n, int count);
int	putnbr_hexa(unsigned int n, char *base, int count);
int	ft_putnbr_unsigned(unsigned int n, int count);
int	ft_putptr(uintptr_t n, int count);
int	print_args(va_list args, const char sp);

#endif
