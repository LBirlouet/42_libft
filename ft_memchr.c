/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:26:10 by lbirloue          #+#    #+#             */
/*   Updated: 2023/11/03 09:47:59 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (n > i)
	{
		if (ret[i] == (unsigned char)c)
			return ((void *)ret + i);
		else
			i++;
	}
	return (0);
}
