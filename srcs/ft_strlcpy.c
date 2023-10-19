/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:44:21 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:30:04 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libc.h"

size_t	ft_size_src(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	ret;

	ret = ft_size_src(src);
	i = 0;
	if (!size)
		return (ret);
	if (!dst || !src)
		return (0);
	while (size - 1 > i)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ret);
}
