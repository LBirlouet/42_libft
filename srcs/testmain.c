/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:27:53 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/16 10:27:53 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testmain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbirloue <lbirloue@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:27:51 by lbirloue          #+#    #+#             */
/*   Updated: 2023/10/16 10:27:51 by lbirloue         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>
int main()
{
	int i = 0;
    char **strs = ft_split("a\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n", '\n');
	while (strs[i])
	{
        printf("|%s|\n", strs[i]);
		i++;
	}
	
}










/*{
    char *src = "1234";
    char dest[16] = {"abc"};
    size_t ret = ft_strlcat(dest, src, 18);
    printf("%s\n ret = %zu", dest, ret );
}*/

/*{
	char dest[8] = "abcdefgh";
	char src[4] = "1234";


	ft_memmove(dest, src, sizeof(char) * 4);

	for(int i = 0; i < 8; i++)
		printf("%c", dest[i]);
	printf("\n");
}
*/


/*{
	char  *result;
	const char s[7] = "hel0lo";
	size_t n = 3;
	result = ft_memchr(s, 48, n);
	if (result)
		printf("%s\n", result);
}*/