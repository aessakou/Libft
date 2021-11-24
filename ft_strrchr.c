/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:30:40 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/24 00:57:33 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	k;
	int		i;

	k = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == k)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
