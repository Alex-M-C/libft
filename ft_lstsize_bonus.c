/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 12:34:23 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/13 12:34:25 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Counts the number of nodes from the list LST
int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}
/*
#include <stdio.h>

int	main(void)
{
	t_list	*node1;
	t_list	*node2;

	node1 = ft_lstnew("algo1");
	node2 = ft_lstnew("algo2");
	node1->next = node2;
	printf("%d\n", ft_lstsize(node1));
}
*/