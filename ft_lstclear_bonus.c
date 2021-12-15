/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:29:35 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/28 23:30:49 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cpy;

	cpy = *lst;
	while (cpy)
	{
		cpy = cpy->next;
		del((*lst)->content);
		free(*lst);
		*lst = cpy;
	}
}
