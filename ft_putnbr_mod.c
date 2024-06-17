/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_mod.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:18:03 by lpierre-          #+#    #+#             */
/*   Updated: 2024/06/11 17:18:05 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_mod(int n, int count)
{
	unsigned int	nbr;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		nbr = -n;
	}
	else
		nbr = n;
	if (nbr < 10)
	{
		ft_putchar_mod(nbr + 48);
		count++;
	}
	else
	{
		count = ft_putnbr_mod(nbr / 10, count);
		count = ft_putnbr_mod(nbr % 10, count);
	}
	return (count);
}
