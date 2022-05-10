/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movettst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:23:41 by hharik            #+#    #+#             */
/*   Updated: 2021/11/02 16:28:43 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_c;
	unsigned char	*src_c;

	dst_c = (unsigned char *)dst;
	src_c = (unsigned char *)src;
	if (!n)
		return (dst);
	if (dst == 0 && src == 0)
		return (0);
	if (dst_c > src_c)
	{
		while (n > 0)
		{
			dst_c[n - 1] = src_c[n - 1];
			n--;
		}
	}
	else
	{
		return (ft_memcpy(dst, src, n));
	}
	return (dst);
}
