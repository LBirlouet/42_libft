/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:34:13 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:29:44 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	*ret;

	ret = (unsigned char *)s;
	i = 0;
	while (ret[i] != c)
	{
		if (ret[i] == 0)
			return (0);
		i++;
	}
	return ((char *)ret + i);
}
