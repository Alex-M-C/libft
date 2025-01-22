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
	if (!lst)
		return ((void *)0);
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
	t_list	*l = ((void *)0);
	t_list	*expected;
	t_list	*actual;

	expected = ((void *)0);
	actual = ft_lstlast(l);
	if (actual == expected)
		return (0);
	return (1);
}
*/