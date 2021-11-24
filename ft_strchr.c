/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:57:11 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/24 00:51:42 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	k;

	if (c == 0)
		return ((char *)s + ft_strlen(s));
	k = c;
	while (*s)
	{
		if (*s == k)
			return ((char *)s);
		s++;
	}
	return (0);
}
