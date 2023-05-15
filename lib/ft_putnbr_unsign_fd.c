/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsign_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:33:14 by ybringui          #+#    #+#             */
/*   Updated: 2023/03/10 16:33:24 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putnbr_unsign_fd(unsigned int n, int fd, int *len)
{
	char	nb;

	if (n >= 10)
	{
		ft_putnbr_unsign_fd(n / 10, fd, len);
		ft_putnbr_unsign_fd(n % 10, fd, len);
	}
	else
	{
		nb = n + '0';
		ft_putchar_fd(nb, fd, len);
	}
}
