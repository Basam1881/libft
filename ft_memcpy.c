/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:59:50 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/01 01:13:47 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    char *str;
    char *str1;
	size_t i;

    str = (char *)dst;
    str1 = (char *)src;
	i = 0;
	// printf("%s", str);
	
	if (str == 0 && str1 == 0)
		return(0);
	while (i < n)
	{
		str[i] = str1[i];
		i++;
	}
	// *str = 0;
	return (dst); 
}

// int main ()
// {
//     // char src[] = "";
// 	// char buff1[] = "";
// 	printf("%s\n", memcpy(((void *)0), ((void *)0), 3));
// 	printf("%s\n", (void *)0);
// 	printf("%s\n", ft_memcpy(((void *)0), ((void *)0), 3));
//     return(0);
// }