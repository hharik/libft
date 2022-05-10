/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:41:00 by hharik            #+#    #+#             */
/*   Updated: 2021/11/03 12:26:17 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_c;
	unsigned char	*src_c ;
	size_t			i;

	i = 0;
	dest_c = (unsigned char *)dest;
	src_c = (unsigned char *)src;
	if (src == 0 && dest == 0)
	{
		return (0);
	}
	while (i < n && n > 0)
	{
		dest_c[i] = src_c[i];
		i++;
	}
	return (dest);
}
