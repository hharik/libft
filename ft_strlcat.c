/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:06:36 by hharik            #+#    #+#             */
/*   Updated: 2021/11/04 12:24:27 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	dlen;

	if (dest == 0 && dstsize == 0 && src)
		return (ft_strlen(src));
	dlen = ft_strlen(dest);
	if (dlen > dstsize)
		return (dstsize + ft_strlen(src));
	ft_strlcpy(dest + dlen, src, dstsize - dlen);
	return (ft_strlen(src) + dlen);
}
