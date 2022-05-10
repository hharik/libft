/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 19:05:18 by hharik            #+#    #+#             */
/*   Updated: 2021/11/04 09:17:54 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
	{
		return (1);
	}
	else
		return (0);
}

static int	ft_sign(int c)
{
	if (c == '-')
		return (-1);
	if (c == '+')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long int	res;
	int			i;
	int			s;

	res = 0;
	s = 1;
	i = 0;
	while (ft_isspace(str[i]) == 1)
		i++;
	if (ft_sign(str[i]) != 0)
	{
		s = ft_sign(str[i]);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > 2147483647)
		{
			if (s == 1)
				return (-1);
			return (0);
		}
		res = res * 10 + str[i++] - '0';
	}
	return (s * res);
}
