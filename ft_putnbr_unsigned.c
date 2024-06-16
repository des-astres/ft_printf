/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:51:49 by lpierre-          #+#    #+#             */
/*   Updated: 2024/06/11 17:51:53 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr_unsigned(unsigned int n, int count)
{
	if (n < 10)
	{
		ft_putchar_mod(n + 48);
		count++;
	}
	else
	{
		count = ft_putnbr_unsigned(n / 10, count);
		count = ft_putnbr_unsigned(n % 10, count);
	}
	return (count);
}
