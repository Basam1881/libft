/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 15:29:18 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/04 17:02:33 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
// #include "ft_lstnew.c"
// #include "ft_strdup.c"
// #include "ft_strlen.c"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	if (!lst)
		return (0);
	while (lst -> next)
	{
		count++;
		lst = lst -> next;
	}
	return (count + 1);
}

// int	main(void)
// {
// 	t_list	*l;
// 	int		actual;
// 	int		expected;

// 	l = ft_lstnew(ft_strdup("1"));
// 	l->next = ft_lstnew(ft_strdup("2"));
// 	l->next->next = ft_lstnew(ft_strdup("3"));
// 	expected = 3;
// 	actual = ft_lstsize(l);
// 	if (actual == expected)
// 		printf("YES\n");
// 	else
// 		printf("NO\n");
// 	return (0);
// }
