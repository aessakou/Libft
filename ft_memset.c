/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:56:53 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/06 12:56:55 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    size_t          i;

    i = 0;
    str = (unsigned char *)b;
    while (i < len)
        str[i++] = (unsigned char)c;
    return ((void *)b);      
}