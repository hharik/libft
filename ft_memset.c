/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:21:41 by hharik            #+#    #+#             */
/*   Updated: 2021/11/05 11:32:16 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *str, int j, size_t n)
{
	unsigned char			j1;
	unsigned char			*str_c;
	size_t					i;

	j1 = (unsigned char)j;
	str_c = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		str_c[i] = j1;
		i++;
	}
	return (str);
}
