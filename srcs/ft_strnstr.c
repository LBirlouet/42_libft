/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 21:18:59 by lbirloue          #+#    #+#             */
/*   Updated: 2023/09/04 17:17:27 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1 ,const char *s2, size_t n)
{
    size_t i;
    size_t j;
    size_t sizes2;

    i = 0;
    sizes2 = ft_strlen(s2);
	while (n > 0)
	{
		j = 0;
        while(s1[i] == s2[j] && s1[i] != 0)
        {
            i++;
            j++;

        }
        if(s2[j] == 0)
            return((char *)s1 + i - sizes2);
        i++;
		n--;
	}
	return (0);
}