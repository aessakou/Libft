/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 00:53:52 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/18 01:13:23 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	**cpy;

	if (!*lst || !new)
		return ;
	*cpy = (t_list *) malloc(sizeof(t_list));
	if (!cpy)
		return ;
	cpy = lst;
	while (*cpy)
	{
		*cpy = cpy->next;
	}
	*cpy = ft_lstnew(new->content);
}