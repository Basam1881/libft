/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 18:12:18 by bnaji             #+#    #+#             */
/*   Updated: 2021/09/29 16:41:02 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include<stddef.h>
#include<stdio.h>
#include<string.h>


char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
    char *str;

    str = (char *)haystack;
	i = 0;
	if (*needle == '\0')
		return (str);
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (str[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return (str + i);
		}
		i++;
	}
	return (0);
}

// int main(){
//     char *s1 = "MZIRIBMZIRIBMZE123";
// 	char *s2 = "MZIRIBMZE";
// 	size_t max = strlen(s2);
// 	char *i1 = strnstr(s1, s2, max);
//    	char *i2 = ft_strnstr(s1, s2, max);

// 	if (i1 == i2)
// 		printf("YES\n");
// 	else
// 		printf("NO\n");
// }