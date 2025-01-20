/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:52:52 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/14 11:52:54 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_bonus.h"

/*
Erases an frees the node poited to by *LST and does the same for each node from 
the list LST using the function DEL and free(3). At the end, the pointer to the
list must be NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	int	count;

	if (!lst || !del)
		return ;
	count = 0;
	while (lst[count])
	{
		ft_lstdelone(lst[count], del);
		count++;
	}
	lst = (void *)0;
}
