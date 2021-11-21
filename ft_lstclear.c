/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 05:04:03 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/21 05:38:35 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cpy;

	cpy = *lst;
	if (!cpy || !del)
		return ;
	while (cpy)
	{
		del(cpy->content);
		free(cpy->content);
		cpy = cpy->next;
	}
	*lst = NULL;
}
