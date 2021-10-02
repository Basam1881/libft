/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 16:59:21 by bnaji             #+#    #+#             */
/*   Updated: 2021/09/29 10:28:25 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*str;

	str = (char *)b;
	while (len > 0)
	{
		*str = c;
        str++;
        len--;
	}
	return (b);
}

// int main(){
// 	int len = 5;
// 	char b[] = "HelloWorld";
// 	char c = '-';
// 	printf("%s", ft_memset(b + 2, c, len));
// 	return (0);
// }