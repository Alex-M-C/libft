/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 12:11:06 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/14 12:11:08 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

//Iterates
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;
	void	*cont;

	newlst = NULL;
	while (lst)
	{
		cont = f(lst->content);
		node = ft_lstnew(cont);
		if (!node)
		{
			ft_lstclear(&lst, del);
			return ((void *)0);
		}
		ft_lstadd_back(&newlst, node);
		lst = lst->next;
	}
	return (newlst);
}
