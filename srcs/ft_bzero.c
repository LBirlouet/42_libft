/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 16:32:14 by lbirloue          #+#    #+#             */
/*   Updated: 2023/09/05 16:45:16 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *ret;

	i = 0;
	ret = (unsigned char *)s;
    while (n > 0)
    {
        ret[i] = 0;
        i++;
        n--;
    }	
}
