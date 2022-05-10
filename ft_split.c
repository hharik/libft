/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hharik <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:47:51 by hharik            #+#    #+#             */
/*   Updated: 2021/11/10 10:47:55 by hharik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_countwords(const char *str, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 1;
	if (*str == 0)
		return (0);
	if (str[0] == c)
		count -= 1;
	while (str[i])
	{
		if ((i > 0 && str[i] != c && str[i - 1] == c) \
			|| (str[i] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}

static char	*ft_strndup(char *str, int n)
{
	char	*ptr;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	ptr = malloc(sizeof(char) * n + 1);
	if (!ptr)
		return (0);
	while (str[i] && i < n)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static void	ft_free(char **ptr, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free (ptr[j]);
		i++;
	}
	free (ptr);
}

static char	**ft_alloc(char const *s, char **ptr, char c)
{
	size_t	i;
	size_t	j;
	size_t	start;

	i = 0;
	j = 0;
	while (j < ft_countwords(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		ptr[j] = ft_strndup ((char *)(s + start), (i - start));
		if (!(ptr[j]))
		{
			ft_free(ptr, j);
			return (NULL);
		}
		j++;
	}
	ptr[j] = 0;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (0);
	ptr = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!ptr)
		return (0);
	return (ft_alloc(s, ptr, c));
}
