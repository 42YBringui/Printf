/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:55:42 by ybringui          #+#    #+#             */
/*   Updated: 2023/03/10 15:55:55 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_sort(char c, va_list printlist, int *len)
{
	if (c == 'c')
		ft_putchar_fd(va_arg(printlist, int), 1, len);
	else if (c == 's')
		ft_putstr_fd(va_arg(printlist, char *), 1, len);
	else if (c == 'p')
		ft_putptr(va_arg(printlist, long long int), len);
	else if (c == 'd')
		ft_putnbr_fdd(va_arg(printlist, int), 1, len);
	else if (c == 'i')
		ft_putnbr_fdd(va_arg(printlist, int), 1, len);
	else if (c == 'u')
		ft_putnbr_unsign_fd(va_arg(printlist, unsigned int), 1, len);
	else if (c == 'x')
		ft_putnbr_base(va_arg(printlist, unsigned int), 0, len);
	else if (c == 'X')
		ft_putnbr_base(va_arg(printlist, unsigned int), 1, len);
	else if (c == '%')
		ft_putchar_fd('%', 1, len);
}

int	ft_printf(const char *P, ...)
{
	va_list		printlist;
	size_t		i;
	int			taille;

	i = 0;
	taille = 0;
	va_start(printlist, P);
	while (P[i])
	{
		if (P[i] != '%')
			ft_putchar_fd(P[i], 1, &taille);
		else
		{
			ft_printf_sort(P[i + 1], printlist, &taille);
			i++;
		}
		i++;
	}
	va_end(printlist);
	return (taille);
}
