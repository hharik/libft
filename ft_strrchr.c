/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 20:08:14 by hharik            #+#    #+#             */
/*   Updated: 2021/11/05 11:33:14 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	index;
	int	i;
	int	len;

	index = 0;
	i = 0;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	while (len)
	{
		if (str[len] == (char)ch)
			return ((char *) str + len);
		len--;
	}
	if (str[0] == (char)ch)
		return ((char *)str);
	return (0);
}
