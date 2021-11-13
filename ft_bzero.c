/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:53:21 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/06 12:53:25 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    size_t          i;

    i = 0;
    str = (unsigned char *)s;
    while (i < n)
        str[i++] = 0;
    return (s);      
}
