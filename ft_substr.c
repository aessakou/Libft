/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 16:43:39 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/14 22:16:54 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
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
