/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:04:50 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/23 19:12:07 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ret;
	int		i;

	i = 0;
	ret = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!ret)
		return (0);
	while (s[i] != 0)
	{
		ret[i] = s[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
