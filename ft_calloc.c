/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:53:55 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/06 12:53:59 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *s;

    s = malloc(count * size);
    if (s == NULL)
        return (NULL);
    s = ft_memset(s, 0, count * size);
    return ((void *)s);
}
