/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 21:42:05 by lbirloue          #+#    #+#             */
/*   Updated: 2023/09/03 16:30:12 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	int i = 0;
    unsigned char *ret;
	ret = (unsigned char *)s;
    
     while(ret[i] != c)
    {
        if (ret[i] == 0)
			return (0);
        i++;
    }
    return ((char *)ret + i);
}