/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 22:40:20 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/24 01:14:48 by aessakou         ###   ########.fr       */
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
