/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybringui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:56:25 by ybringui          #+#    #+#             */
/*   Updated: 2023/03/10 16:39:22 by ybringui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isalpha(int c);
void	ft_putptr(unsigned long long nb, int *len);
void	ft_putnbr_fdd(int n, int fd, int *len);
void	ft_putnbr_unsign_fd(unsigned int n, int fd, int *len);
void	ft_putstr_fd(char *s, int fd, int *len);
void	ft_putnbr_base(unsigned int nbr, int c, int *len);
void	ft_putchar_fd(char c, int fd, int *len);

#endif
