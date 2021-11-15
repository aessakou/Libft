/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:58:22 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/14 22:11:37 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[j] && j < len)
	{
		i = 0;
		while (haystack[j] == needle[i] && j < len)
		{
			if (!needle[i + 1])
			{
				return ((char *)haystack + (j - i));
			}
			i++;
			j++;
		}
		if (i > 0)
			j -= i;
		j++;
	}
	return (0);
}
