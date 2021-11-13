/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:57:21 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/09 19:16:38 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int 		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *) malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (src[i] != 0)
	{
		str[i] = (char)src[i];
		i++;
		if (src[i] == 0)
			str[i] = 0;
	}
	return (str);
}
