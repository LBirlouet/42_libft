/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 11:24:10 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/23 11:32:28 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		ret;
	t_list	*i;

	ret = 1;
	if (!lst)
		return (0);
	i = lst;
	while (i->next != NULL)
	{
		ret++;
		i = i->next;
	}
	return (ret);
}
