/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 13:35:58 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/23 18:31:12 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ret;
	t_list	*begin;

	begin = 0;
	if (!lst)
		return (NULL);
	while (lst)
	{
		ret = ft_lstnew(f(lst->content));
		if (!ret)
		{
			ft_lstclear(&begin, del);
			return (0);
		}
		ft_lstadd_back(&begin, ret);
		lst = lst->next;
	}
	return (begin);
}
