/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 12:30:30 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/23 13:35:24 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*swap;
	t_list	*next_elem;

	if (!lst || !del || !*lst)
		return ;
	next_elem = (*lst)->next;
	ft_lstdelone(*lst, del);
	while (next_elem)
	{
		swap = next_elem->next;
		ft_lstdelone(next_elem, del);
		next_elem = swap;
	}
	*lst = NULL;
}
