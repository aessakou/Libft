/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 17:02:49 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/14 20:55:50 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_getlen(long int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int			i;
	long int	m;
	char		*str;

	m = n;
	i = ft_getlen(m);
	str = (char *)malloc((i + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[i] = 0;
	if (m < 0)
	{
		str[0] = '-';
		m *= -1;
	}
	i--;
	if (m == 0)
		str[i] = '0';
	while (m)
	{
		str[i] = (m % 10) + 48;
		m /= 10;
		i--;
	}
	return (str);
}
