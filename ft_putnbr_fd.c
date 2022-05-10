/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 18:57:04 by hharik            #+#    #+#             */
/*   Updated: 2021/11/07 18:57:07 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	b;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		b = n * -1;
	}
	else
	{
		b = n;
	}
	if (b >= 0 && b <= 9)
	{
		ft_putchar_fd(b + '0', fd);
	}
	else
	{
		ft_putnbr_fd(b / 10, fd);
		ft_putnbr_fd(b % 10, fd);
	}
}
