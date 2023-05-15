/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:34:08 by ybringui          #+#    #+#             */
/*   Updated: 2023/03/10 16:34:20 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	ft_putstr_fd(char *s, int fd, int *len)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1, len);
		return ;
	}
	while (*s)
	{
		ft_putchar_fd(*s, fd, len);
		s++;
	}
}
