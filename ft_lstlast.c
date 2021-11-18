/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:43:11 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/18 00:46:36 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cpy;

	if (!lst)
		return (0);
	cpy = (t_list *) malloc(sizeof(t_list));
	if (!cpy)
		return (NULL);
	cpy = lst;
	while (cpy)
	{
		cpy = cpy->next;
		if (cpy->next == NULL)
			return (cpy);
	}
	return (cpy);
}