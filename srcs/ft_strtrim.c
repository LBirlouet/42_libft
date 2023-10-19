/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:51:37 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/19 13:30:39 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	check_verif(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i] != 0)
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

size_t	start_indice(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (check_verif(s1[i], set) != 0)
	{
		count++;
		i++;
	}
	return (count);
}

size_t	final_indice(char const *s1, char const *set)
{
	size_t	i;
	size_t	count;

	i = ft_strlen(s1);
	count = 0;
	while (check_verif(s1[i - 1], set) != 0)
	{
		count++;
		i--;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_str;
	size_t	final_str;
	size_t	ret_size;

	start_str = start_indice(s1, set);
	final_str = final_indice(s1, set);
	ret_size = ft_strlen(s1) - final_str - start_str;
	return (ft_substr(s1, start_str, ret_size));
}
