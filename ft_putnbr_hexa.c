/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_mod.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpierre- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:28:57 by lpierre-          #+#    #+#             */
/*   Updated: 2024/06/11 17:28:58 by lpierre-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	putnbr_hexa(unsigned int n, char *base, int count)
{
	if (n < 16)
	{
		write(1, &base[n], 1);
		count++;
	}
	else
	{
		count = putnbr_hexa(n / 16, base, count);
		count = putnbr_hexa(n % 16, base, count);
	}
	return (count);
}
