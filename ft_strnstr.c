/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 18:23:57 by hharik            #+#    #+#             */
/*   Updated: 2021/11/05 11:36:27 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*find == 0)
		return ((char *)str);
	if (n == 0 && str == 0)
	{
		return (NULL);
	}
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (find[j] == str[i + j] && (i + j) < n)
		{
			j++;
			if (find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
