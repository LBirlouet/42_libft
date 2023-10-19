/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:26:10 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:29:06 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		if (ret[i] != c)
		{
			if (ret[i] == 0)
				return (0);
		}
		if (ret[i] == c)
			return ((char *)ret + i);
		i++;
		n--;
	}
	return (0);
}
