/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:00:38 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/03 14:29:04 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;

	i = 0;
	srclen = ft_strlen((char *)src);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstlen + srclen - (dstlen - dstsize));
	else
	{
		while (dstsize-- - (dstlen + 1) > 0)
		{
			dst[dstlen + i] = src[i];
			i++;
		}
		return (dstlen + srclen);
	}
}
