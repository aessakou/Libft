/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:27:39 by aessakou          #+#    #+#             */
/*   Updated: 2021/12/08 16:07:21 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	if (!(*lst))
		*lst = new;
	else
	{
		temp = *lst;
		while (temp->next)
			temp = temp->next;
		temp->next = new;
	}
}
/*int main()
{
	t_list **lst;
	t_list *lst1;
	t_list *lst2;
	t_list *head;

	lst1 = ft_lstnew("hello");
	lst2 = ft_lstnew("hey");
	ft_lstadd_back(lst, lst1);
	ft_lstadd_back(lst, lst2);
	head = *lst;
	while (head)
	{
		printf("%s\n", (char *)head->content);
		head = head->next;
	}
	return 0;
}*/