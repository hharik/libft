/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:45:00 by hharik            #+#    #+#             */
/*   Updated: 2021/11/12 15:45:09 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	checkchar(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*ptr;
	size_t	f;

	if (s1 == 0)
		return (NULL);
	i = 0;
	f = 0;
	j = ft_strlen(s1) - 1;
	if (!set)
		return (ft_strdup(s1));
	while (s1[i] && checkchar(set, s1[i]))
		i++;
	while (j > i && checkchar(set, s1[j]) && j > 1)
		j--;
	ptr = malloc ((sizeof(char) * ((j - i) + 2)));
	if (!ptr)
		return (0);
	while (i <= j && s1 != '\0')
	{
		ptr[f++] = s1[i++];
	}
	ptr[f] = '\0';
	return (ptr);
}
