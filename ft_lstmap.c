/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bnaji <bnaji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 17:58:22 by bnaji             #+#    #+#             */
/*   Updated: 2021/10/05 20:07:46 by bnaji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*new;

	if (!lst || !f || del)
		return (NULL);
	newlst = NULL;
	while (lst)
	new = ft_lstnew(f(lst -> content));
	{
		if (!(new)))
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, new);
		lst = lst -> next;
	}
	return (newlst);
}
