/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:43:39 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/24 00:50:20 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = (ft_strlen(s) - start);
	if (start >= ft_strlen(s))
		len = 0;
	if (j >= len)
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (len > j)
		substr = (char *)malloc((j + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	str = (char *)s + start;
	i = 0;
	while (i < len && str[i])
	{
		substr[i] = str[i];
		i++;
	}
	substr[i] = 0;
	return (substr);
}
