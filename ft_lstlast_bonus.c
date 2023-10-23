/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:33:21 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/23 11:42:36 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*i;
	int		j;

	i = lst;
	if (!lst)
		return (NULL);
	j = ft_lstsize(i);
	while (j > 1)
	{
		i = i->next;
		j--;
	}
	return (i);
}
