#include "libft.h"

#include <stdio.h>
int main()
{
	const char s1[50] = "trertt 8aa 5pp";
	const char s2[50] = "8aa";
	size_t n = 8;
	char *res = ft_strnstr(s1, s2, n);

	if(res)
		printf("%s\n",res);
	else
		printf("%p\n",res);
}


/*{
	char  *result;
	const char s[7] = "hel0lo";
	size_t n = 3;
	result = ft_memchr(s, 48, n);
	if (result)
		printf("%s\n", result);
}*/