/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 12:56:37 by aessakou          #+#    #+#             */
/*   Updated: 2021/11/06 12:56:40 by aessakou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char        *str1;
    const char  *str2;
    size_t      i;
    
    str1 = dst;
    str2 = src;
    i = 0;
    if (dst == NULL && src == NULL)
        return (NULL);

    else if (str1 > str2)
    {
        while (len-- > 0)
            str1[len] = str2[len];
    }
    else
    {
        while (i < len)
        {
            str1[i] = str2[i];
            i++;
        }
    }
    return (dst);
}
/*int main()
{
    char str1[] = "hey anyone";
    printf("Myft:%s\n", ft_memmove(str1, str1 + 2, 4));
    char str2[] = "hey anyone";
    printf("Orig:%s\n", memmove(str2, str2 + 2, 4));
    return 0;
}*/
