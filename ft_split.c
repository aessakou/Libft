/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+: :+:         :+:       :+:  :+:  :+:      */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 23:32:06 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/13 19:40:50 by aessakou          #######  ########  ########       ###.ma   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_countword(char *s, char c)
{
    int i;
    int j;
    int count;

    i = 0;
    j = 0;
    count = 1;
    while (s[i] == c)
        i++;
    while (s[i])
    {
        while (s[i] == c && s[i])
        {
            i++;
            if (!s[i])
                return (count);
            if (s[i] != c)
                count++;
        }
        i++;
    }
    return (count);
}

static char **ft_alloc(char **split, char *s, char c, int words)
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
		split[k] =(char *)malloc((j + 1) * sizeof(char));
		k++;
	}
	return (split);
}

static char **ft_getwords(char **split, char *s, char c, int words)
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

char    **ft_split(char const *s, char c)
{
    int     i;
    char    **split;

    if (!s)
        return (NULL);
    i = ft_countword((char *)s, c) + 1;
    split = (char **)malloc(i * sizeof(char *));
    if (!split)
        return (NULL);
    split = ft_alloc(split, (char *)s, c, i - 1);
    split = ft_getwords(split, (char *)s, c, i - 1);
    split[i - 1] = NULL;
    return (split);
}