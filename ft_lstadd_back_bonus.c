/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:18:40 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 13:18:42 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Adds the node NEW at the end of the node list LST
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!new)
		return ;
	else if (!*lst)
	{
		*lst = new;
		return ;
	}
	node = *lst;
	while (node->next)
	{
		node = node->next;
	}
	node->next = new;
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	**list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	node1 = ft_lstnew("algo1");
	node2 = ft_lstnew("algo2");
	node3 = ft_lstnew("algo3");
	node1->next = node2;
	list = malloc(3 * sizeof(t_list));
	list[0] = node1;
	list[1] = node2;
	ft_lstadd_back(list, node3);
	printf("%s\n", (char *)list[2]->content);
	free(list);
	free(node1);
	free(node2);
	free(node3);
	return (0);
}
*/