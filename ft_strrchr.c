/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:38:59 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 19:00:42 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	*ret;

	if (!s)
		return (0);
	i = ft_strlen(s);
	ret = (unsigned char *)s;
	while (ret[i] != c && i >= 0)
	{
		if (ret[i - 1] == 0)
			return (0);
		i--;
	}
	if (i < 0)
		return (NULL);
	return ((char *)&ret[i]);
}
