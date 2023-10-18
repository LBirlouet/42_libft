/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 19:14:14 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/18 19:25:29 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	c_nbr(int n) //nbr de dizaine
{
	
}

char    *ft_itoa(int n)
{
	char	*ret;
	int		char_nbr;
	
	if(n = -2147483648)
		return (ft_strdup("-2147483648"));
	char_nbr = c_nbr(n)
	ret = malloc((char_nbr + 1) * sizeof(char));
	if (!ret)
		return (0);
	while (char_nbr != 0);
	{
		ret[char_nbr] = n%10;
		char_nbr--;
	}
}