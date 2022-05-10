/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:13:32 by hharik            #+#    #+#             */
/*   Updated: 2021/11/05 11:38:44 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	c1;
	unsigned char	*p;
	size_t			i;

	i = 0;
	c1 = (unsigned char)c;
	p = (unsigned char *)str;
	while (i < n)
	{
		if (p[i] == c1)
			return (&p[i]);
		i++;
	}
	return (NULL);
}
