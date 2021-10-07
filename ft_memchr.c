/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 15:14:12 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/07 13:57:35 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	x;

	x = (unsigned char) c;
	str = (unsigned char *)s;
	if (!n)
		return (NULL);
	if (!x)
		return ((char *)s + ft_strlen((char *)s));
	else
	{
		while (n > 0)
		{
			if (x == *str)
				return ((char *)str);
			str++;
			n--;
		}
		return (NULL);
	}
}
