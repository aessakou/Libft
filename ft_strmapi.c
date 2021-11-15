/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 22:24:57 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/15 15:53:25 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*newstr;
	size_t	i;
	size_t	j;

	if (!f || !s)
		return (NULL);
	i = ft_strlen(s);
	newstr = (char *) malloc((i + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	j = 0;
	while (j < i)
	{
		newstr[j] = f(j, s[j]);
		j++;
	}
	newstr[j] = 0;
	return (newstr);
}
