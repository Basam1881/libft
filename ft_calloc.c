/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 19:31:20 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/01 01:58:40 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{   
	char	*str;

	size = size * count;
	if (!(str = malloc(size)))
		return (0);
	bzero(str, size);
	return (str);
}

// int main(){
//     int *c = ft_calloc(5,sizeof(int));
//     return (0);
// }