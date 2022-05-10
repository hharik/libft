/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:54:24 by hharik            #+#    #+#             */
/*   Updated: 2021/11/05 11:31:25 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc (count * size);
	if (!ptr)
		return (NULL);
	if (ptr)
	{
		ft_bzero(ptr, count * size);
	}
	return (ptr);
}
