/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:02:46 by lpierre-          #+#    #+#             */
/*   Updated: 2024/06/11 19:02:48 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putptr(uintptr_t n, int count)
{
	char	*base;

	if (!n && count == 0)
		return (ft_putstr_mod("(nil)"));
	base = "0123456789abcdef";
	if (count == 0)
	{
		write(1, "0x", 2);
		count += 2;
	}
	if (n < 16)
	{
		write(1, &base[n], 1);
		count++;
	}
	else
	{
		count = ft_putptr(n / 16, count);
		count = ft_putptr(n % 16, count);
	}
	return (count);
}
