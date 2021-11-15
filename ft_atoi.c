/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:52:50 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/14 22:29:03 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_getmaxmin(int n)
{
	if (n == 1)
		return (0);
	else
		return (-1);
}

int	ft_atoi(const char *str)
{
	int					i;
	unsigned long long	k;
	int					n;

	i = 0;
	k = 0;
	n = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
			i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		k = str[i++] - 48 + k * 10;
	}
	if (k > 2147483648)
		return (ft_getmaxmin(n));
	return (k * n);
}
