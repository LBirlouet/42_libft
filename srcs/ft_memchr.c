/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:59:46 by lbirloue          #+#    #+#             */
/*   Updated: 2023/09/03 17:26:12 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	int i = 0;
    unsigned char *ret;
	ret = (unsigned char *)s;
    
    while (n > 0)
    {
        if(ret[i] != c)
        {
            if (ret[i] == 0)
			    return (0);
        }
        if(ret[i] == c)
            return ((char *)ret + i);
        i++;
        n--;
    }
    return (0);
}