/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:32:19 by aessakou          #+#    #+#             */
/*   Updated: 2021/12/09 01:45:23 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*newlst;
	int		i;

	if (!lst || !f)
		return (NULL);
	temp = lst;
	i = 1;
	newlst = ft_lstnew(f(temp->content));
	temp = temp->next;
	while (temp)
	{
		ft_lstadd_back(&newlst, ft_lstnew(f(temp->content)));
		if (!newlst)
		{
			while (i--)
				ft_lstdelone(newlst, del);
			return (NULL);
		}
		i++;
		temp = temp->next;
	}
	return (newlst);
}
