/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:23:31 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/03 03:06:29 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// #include "ft_strlen.c"

char *ft_strrchr(const char *s, int c)
{
    int slen;

    slen = ft_strlen((char *)s);
    if (c == 0)
        return ((char *)s + slen);
    else 
    {
        s = (char *)s + slen - 1;
        while (slen-- > 0)
        {
            if (c == *s)
                return ((char *)s);
            s--;
        }
        return (0);
    }
}


// int main(){
//     char c[] = "HelloWorld";
//     printf("%p\n%p\n\n%p\n", c, ft_strrchr(c, 'o'), c);
//     return (0);
// }