/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:05:00 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 13:05:06 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

//@returns The last node of the list LST
t_list	*ft_lstlast(t_list *lst)
{
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*test;

	node1 = ft_lstnew("algo1");
	node2 = ft_lstnew("algo2");
	node3 = ft_lstnew("algo3");
	node1->next = node2;
	node2->next = node3;
	test = ft_lstlast(node1);
	printf("%s\n", (char *)test->content);
}
*/