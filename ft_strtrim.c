/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/30 20:16:58 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/02 10:41:49 by bnaji            ###   ########.fr       */ 
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strchr.c"
#include "ft_substr.c"

#include "ft_strdup.c"

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	int start;
	int end;
	char *str;
	int i;

	start = 0;
	i = 0;
	end = ft_strlen((char *)s1);
	while (ft_strchr((char *)set, s1[start]) && s1[start])
		start++;
	while (s1[start] != 0 && ft_strchr((char *)set, s1[end]) && end != start)
		end--;
	str = ft_substr(s1, start, end);
	return (str);
}


int main()
{
	char s1[] = "HelloWorldCity";
	char set[] = "Hyelt";
	printf("%s", ft_strtrim(s1, set));
	return (0);
}




// char		*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	i;
// 	size_t	len;
// 	char	*str;

// 	if (!s1 || !set)
// 		return (NULL);
// 	i = 0;
// 	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
// 		i++;
// 	len = ft_strlen((char *)s1 + i);
// 	while (ft_strchr(set, s1[i + len]))
// 		len--;
// 	if (!(str = ft_substr(s1, i, len + 1)))
// 		return (NULL);
// 	return (str);
// }



