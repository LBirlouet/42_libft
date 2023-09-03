/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:42:13 by lbirloue          #+#    #+#             */
/*   Updated: 2023/09/03 16:47:00 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = ft_strlen(s);
    unsigned char *ret;
	ret = (unsigned char *)s;
    
     while(ret[i] != c)
    {
        if (ret[i-1] == 0)
			return (0);
        i--;
    }
    return ((char *)ret + i);
}