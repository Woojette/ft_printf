/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooyang <wooyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 17:44:51 by wooyang           #+#    #+#             */
/*   Updated: 2025/05/28 17:44:53 by wooyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putpointer(void *n)
{
	int	i;

	i = 0;
	if (!n)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	write(1, "0x", 2);
	i = 2;
	i += ft_putnbr_hexa_min((unsigned long)n);
	return (i);
}

// int main()
// {
//     // char *test = "Bonjour";
//     char *test = NULL;
//     ft_putpointeur((unsigned long)test);
//     printf("%p\n\n", test);

//     // test = "123456789132465789";
//     // ft_putpointeur((unsigned long)test);
//     // printf("%p\n\n", test);
//     // test = "abcdefiopioipoiipoip";
//     // ft_putpointeur((unsigned long)test);
//     // printf("%p\n\n", test);
// }
