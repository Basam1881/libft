/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 08:49:32 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/05 10:26:01 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*l;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		l = ft_lstlast(*lst);
		l -> next = new;
	}
	new -> next = NULL;
}

// int	main(void)
// {
// 	t_list	*l;
// 	t_list	*n;

// 	l = ft_lstnew (ft_strdup((void *)0));
// 	n = ft_lstnew (ft_strdup("OK"));
// 	ft_lstadd_back(&l, n);
// 	if (n -> content == l -> next -> content)
// 		printf("YES\n");
// 	return (0);
// }
