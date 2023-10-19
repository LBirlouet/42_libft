/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:36:41 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:35:50 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;
	size_t	j;
	size_t	size_s1;
	size_t	size_s2;

	i = 0;
	j = 0;
	size_s1 = ft_strlen(s1);
	size_s2 = ft_strlen(s2);
	ret = malloc((size_s1 + size_s2 + 1) * sizeof(char));
	if (!ret)
		return (0);
	while (i < size_s1)
	{
		ret[i] = s1[i];
		i++;
	}
	while (i < size_s1 + size_s2)
	{
		ret[i] = s2[j++];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
