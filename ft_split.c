/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 04:39:31 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/24 01:39:01 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		while (s[i] != c && s[i])
		{
			i++;
			if (s[i] == c || !s[i])
				count++;
		}
	}
	return (count);
}

static void	ft_free(char **split, int i)
{
	while (i >= 0)
	{
		free(split[i]);
		i--;
	}
	free(split);
}

static char	**ft_alloc(char **split, char *s, char c, int words)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (s[i] && k < words)
	{
		j = 0;
		while (s[i] == c)
			i++;
		while (s[i] != c && s[i])
		{
			j++;
			i++;
		}
		split[k] = (char *) malloc((j + 1) * sizeof(char));
		if (!split[k])
		{
			ft_free(split, k);
			return (NULL);
		}
		k++;
	}
	return (split);
}

static char	**ft_getwords(char **split, char *s, char c, int words)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	if (!split)
		return (NULL);
	while (s[i] && j < words)
	{
		while (s[i] == c)
			i++;
		k = 0;
		while (s[i] != c && s[i])
		{
			split[j][k] = s[i];
			k++;
			i++;
		}
		split[j][k] = 0;
		j++;
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**split;

	if (!s)
		return (NULL);
	if (s[0] == 0)
	{
		split = (char **) malloc(1 * sizeof(char *));
		split[0] = NULL;
		return (split);
	}
	i = ft_countword((char *)s, c) + 1;
	split = (char **)malloc(i * sizeof(char *));
	if (!split)
		return (NULL);
	split = ft_alloc(split, (char *)s, c, i - 1);
	if (!split)
		return (NULL);
	split = ft_getwords(split, (char *)s, c, i - 1);
	split[i - 1] = NULL;
	return (split);
}
