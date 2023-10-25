/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:35:58 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/25 10:39:54 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*start;
	t_list	*ret;

	ret = 0;
	if (!lst || !f)
		return (NULL);
	while (lst)
	{
		start = ft_lstnew(f(lst->content));
		if (!start)
		{
			ft_lstclear(&ret, del);
			return (0);
		}
		ft_lstadd_back(&ret, start);
		start = start->next;
		lst = lst->next;
	}
	return (ret);
}
