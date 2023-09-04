/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 19:33:14 by lbirloue          #+#    #+#             */
/*   Updated: 2023/09/04 19:54:27 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



#include <stdio.h>

void *ft_memset (void *s, int c, size_t n)
{
    size_t i;
    unsigned char *ret;

    i = 0;
	ret = (unsigned char *)s;
    while (n > 0)
    {
        ret[i] = c;
        i++;
        n--;
    }
    return((char *)ret + i);
}