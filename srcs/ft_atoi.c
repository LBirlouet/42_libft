/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:31:44 by lbirloue          #+#    #+#             */
/*   Updated: 2023/08/29 19:31:44 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int ret;
	int sign;

	i = 0;
	ret = 0;
	sign = 1;
	if (!str)
		return (0);
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' ||str[i] == '\r' 
		|| str[i] == '\f' || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{	
		if (str[i + 1] == '+' || str[i + 1] == '-')
			return (0);
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret = (ret * 10) + (str[i] - 48);
		if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
			return (ret * sign);
		i++;
	}
	return (ret * sign);
}
