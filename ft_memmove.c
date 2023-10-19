/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:32:14 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:29:15 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	*cpy;
	unsigned char	tempo;

	i = 0;
	ret = (unsigned char *)dest;
	cpy = (unsigned char *)src;
	while (n > 0)
	{
		tempo = cpy[i];
		ret[i] = tempo;
		i++;
		n--;
	}
	return ((char *)ret + i);
}
