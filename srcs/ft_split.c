/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:57:00 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/18 17:59:53 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

size_t	size_str(char const *s, char c, ssize_t i)
{
	size_t	ret;

	ret = 0;
	while (s[i] != c && s[i] != 0)
	{
		ret++;
		i++;
	}
	return (ret);
}

int	str_count(char const *s, char c)
{
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	while (s[i] != 0)
	{
		while (s[i] == c && s[i] != 0)
			i++;
		if (s[i] != 0)
		{
			while (s[i] && s[i] != c)
				i++;
			j++;
		}
		while (s[i] == c && s[i] != 0)
			i++;
	}
	return (j);
}

char	*freeall(char **s, ssize_t i)
{
	while (i > 0)
	{
		free(s[i]);
		s[i] = NULL;
		i--;
	}
	free(s);
	s = NULL;
	return (*s);
}

char	**split2(char const *s, char c, char **ret)
{
	size_t	i;
	size_t	j;
	int		count_str;
	size_t	len_str;

	i = 0;
	j = -1;
	count_str = str_count(s, c);
	while (s[i] != 0)
	{
		if (s[i] == c)
			while (s[i] == c)
				i++;
		else
		{
			len_str = size_str(s, c, i);
			ret[++j] = ft_substr(s, i, len_str);
			if (!ret[j])
				freeall(ret, count_str);
			i +=  len_str;
		}
	}
	ret[++j] = 0;
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	size_t	j;
	ssize_t	i;
	char	**ret;

	j = 0;
	i = 0;
	if (!s)
		return (0);
	ret = malloc((str_count(s, c) + 1) * sizeof(char *));
	if (!ret)
		return (0);
	return (split2(s, c, ret));
}
