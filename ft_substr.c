/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 18:30:24 by hharik            #+#    #+#             */
/*   Updated: 2021/11/05 11:48:05 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*ptr;
	size_t	i;
	size_t	j;

	if (s == 0)
		return (NULL);
	slen = ft_strlen(s);
	j = 0;
	ptr = 0;
	i = 0;
	if (start >= slen)
		return (ft_strdup(""));
	if (len >= slen)
		len = slen - start;
	ptr = malloc((len) * sizeof(char) + 1);
	if (!ptr)
		return (0);
	while (i < len && s[i] != '\0')
	{
		ptr[j++] = s[start + i++];
	}
	ptr[i] = '\0';
	return (ptr);
}
