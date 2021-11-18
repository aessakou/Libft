/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <aessakou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 22:02:11 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/18 00:01:04 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newele;

	newele = (t_list *) malloc(sizeof(t_list));
	if (!newele)
		return (NULL);
	newele->content = content;
	newele->next = NULL;
	return (newele);
}
