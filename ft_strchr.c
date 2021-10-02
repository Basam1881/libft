/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 13:23:26 by bnaji             #+#    #+#             */
/*   Updated: 2021/09/30 19:36:25 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
    if (c == 0)
        return ((char *)s + strlen((char *)s));
    else 
    {
        while (*s)
        {
            if (c == *s)
                return ((char *)s);
            s++;
        }
        return (0);
    }
}


// int main(){
//     char c[] = "HelloWorld";
//     printf("%p\n%p\n\n", c, ft_strchr(c,0));
//     return (0);
// }