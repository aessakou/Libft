/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:11:06 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/18 00:38:40 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*cpy;

	i = 0;
	if (!lst)
		return (0);
	cpy = (t_list *) malloc(sizeof(t_list));
	if (!cpy)
		return (0);
	cpy = lst;
	while (cpy)
	{
		cpy = cpy->next;
		i++;
	}
	return (i);
}