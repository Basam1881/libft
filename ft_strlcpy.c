/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:00:24 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/01 17:03:10 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include<stdio.h>
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	// if (!dst || !src)
	// 	return (0);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize--)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	return (strlen((char *)src));
}

// int main()
// {
//     char src[] = "Nartfh";
//     char dst[] =  "Pizhjkghkhgjkghjkhjkza";
//     printf("%lu\n",ft_strlcpy(dst, src, 50));
//     printf("%s", dst);
//     return (0);
// }