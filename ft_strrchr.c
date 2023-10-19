/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:38:59 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:30:34 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*ret;

	i = ft_strlen(s);
	ret = (unsigned char *)s;
	while (ret[i] != c)
	{
		if (ret[i - 1] == 0)
			return (0);
		i--;
	}
	return ((char *)ret + i);
}
