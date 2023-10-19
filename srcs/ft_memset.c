/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:33:17 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:29:18 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	i = 0;
	ret = (unsigned char *)s;
	while (n > 0)
	{
		ret[i] = c;
		i++;
		n--;
	}
	return ((char *)ret + i);
}
