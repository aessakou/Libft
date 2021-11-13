/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:56:25 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/06 12:56:29 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void   *ft_memcpy(void *dst, const void *src, size_t n)
 {
     char       *str1;
     char   *str2;

     if (dst == NULL && src == NULL)
        return (NULL);
    str1 = (char *)dst;
    str2 = (char *)src;
    while(n--)
        *str1++ = *str2++;
    return (dst);
 }
