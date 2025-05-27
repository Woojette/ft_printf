/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wooyang <wooyang@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:30:34 by wooyang           #+#    #+#             */
/*   Updated: 2025/05/27 16:44:57 by wooyang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <limits.h>

int	    ft_putchar(char c);
void	ft_putstr(char *str);
int	    ft_putnbr(int n);
void	ft_putnbr_u(unsigned int n);
void	ft_putnbr_hexa_min(unsigned int n);
void	ft_putnbr_hexa_max(unsigned int n);
void    ft_putpointer(void *n);
int     ft_printf(const char *str, ...);
size_t  ft_strlen(const char *str);

#endif
