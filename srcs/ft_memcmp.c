/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 20:05:55 by lbirloue          #+#    #+#             */
/*   Updated: 2023/09/03 20:52:33 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *str1;
    unsigned char *str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;

    i = 0;
	while (n > 0)
	{
		if(str1[i] != str2[i])
			return (str1[i]-str2[i]);
		i++;
		n--;
	}
	return (0);
}