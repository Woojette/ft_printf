/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooyang <wooyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:41:37 by wooyang           #+#    #+#             */
/*   Updated: 2025/05/27 16:44:19 by wooyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_libft.h"

void	ft_putnbr_hexa_max(unsigned int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb > 15)
		ft_putnbr_hexa_max(nb / 16);
    write(1, &"0123456789ABCDEF"[nb % 16], 1);
}
/*
int	main (void)
{
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(221);
	write(1, "\n", 1);
	ft_putnbr(-71);
	return (0);
}*/
