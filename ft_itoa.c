/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:58:10 by hharik            #+#    #+#             */
/*   Updated: 2021/11/06 14:58:14 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	no_dig(int num)
{
	int	i;

	i = 0;
	while (num > 0)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

static char	*ft_cases(int num)
{
	if (num == 0)
		return (ft_strdup("0"));
	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	return (0);
}

char	*ft_itoa(int num)
{
	char	*str;
	int		i;

	i = 0;
	if (num == 0 || num == -2147483648)
		return (ft_cases(num));
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	i = i + no_dig(num);
	str = malloc (i * sizeof(char) + 1);
	if (!str || !i)
		return (NULL);
	str[i] = '\0';
	while (num > 0)
	{
		str[i - 1] = num % 10 + '0';
		num = num / 10;
		i--;
	}
	if (i == 1)
		str[0] = '-';
	return (str);
}
