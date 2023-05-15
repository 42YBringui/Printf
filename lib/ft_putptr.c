/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:33:41 by ybringui          #+#    #+#             */
/*   Updated: 2023/03/10 16:33:51 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	ft_ptrhex(uintptr_t nb, int *len)
{
	if (nb >= 16)
	{
		ft_ptrhex(nb / 16, len);
		ft_ptrhex(nb % 16, len);
	}
	else
	{
		if (nb <= 9)
			ft_putchar_fd((nb + 48), 1, len);
		else
			ft_putchar_fd((nb - 10 + 'a'), 1, len);
	}
}

void	ft_putptr(unsigned long long nb, int *len)
{
	if (nb == 0)
		ft_putstr_fd("(nil)", 1, len);
	else
	{
		ft_putstr_fd("0x", 1, len);
		ft_ptrhex(nb, len);
	}
}
