/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:16:18 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/16 13:14:50 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strn_size(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	pos;
	size_t	i;

	i = 0;
	if (size < i)
		return (0); 
	if (!size || size + 1 < ft_strn_size(src))
		return (ft_strn_size(src) + size);
	if (!src)
		return (size);
	dst_size = ft_strn_size(dst);
	pos = dst_size;
	while (size > dst_size + 1 && size > ft_strn_size(src))
	{
		dst[dst_size] = src[i];
		i++;
		dst_size++;
	}
	dst[dst_size] = 0;
	return (pos + ft_strn_size(src));
}
