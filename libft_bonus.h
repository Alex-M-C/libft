/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_bonus.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleconst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/14 11:33:43 by aleconst          #+#    #+#             */
/*   Updated: 2025/01/14 11:33:45 by aleconst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstadd_front(t_list **lst, t_list *new);

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstlast(t_list *lst);

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

t_list	*ft_lstnew(void *content);

int		ft_lstsize(t_list *lst);
