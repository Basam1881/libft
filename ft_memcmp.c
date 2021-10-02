/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 17:33:12 by bnaji             #+#    #+#             */
/*   Updated: 2021/09/30 09:05:25 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned int i;
    unsigned char *str;
    unsigned char *str1;

    str = (unsigned char *)s1;
    str1 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (str[i] == str1[i] && i < n - 1)
		i++;
	// printf("(%c)\n", str[i]);
	// printf("(%c)\n", str1[i]);
	return (str[i] - str1[i]);
}	

// int main()
// {
// 	char *s1 = "\xff\xaa\xde\xffMACOSX\xff";
// 	char *s2 = "\xff\xaa\xde\x02";
// 	size_t size = 8;
// 	int i1 = memcmp(s1, s2, size);
// 	int i2 = ft_memcmp(s1, s2, size);

// 	if (i1 == i2)
// 		printf("YES\n");
// 	else
// 		printf("NO\n");
// 	return (0);
// }