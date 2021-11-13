/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:57:32 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/06 12:57:33 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  i;
    size_t  dstlen1;
    size_t  dstlen2;
    size_t  srclen;

    i = 0;
    dstlen1 = ft_strlen(dst);
    dstlen2 = ft_strlen(dst);
    srclen = ft_strlen(src);
    if (dstsize <= dstlen1)
        return (dstsize + srclen);
    while (dstlen1 < (dstsize - 1) && src[i])
    {
        dst[dstlen1] = src[i];
        dstlen1++;
        i++;
    }
    dst[dstlen1] = 0;
    return (dstlen2 + srclen);
}
