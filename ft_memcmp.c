/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:53:24 by hharik            #+#    #+#             */
/*   Updated: 2021/11/05 11:39:14 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{	
	unsigned char			*s1;
	unsigned char			*s2;
	size_t					i;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	if (n == 0)
	{
		return (0);
	}
	while ((s1[i] == s2[i] && i + 1 < n))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
