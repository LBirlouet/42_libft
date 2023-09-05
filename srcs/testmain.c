#include "libft.h"

#include <stdio.h>
int main()
{
	char dest[8] = "abcdefgh";
	char src[4] = "1234";


	ft_memmove(dest, src, sizeof(char) * 4);

	for(int i = 0; i < 8; i++)
		printf("%c", dest[i]);
	printf("\n");
}



/*{
	char  *result;
	const char s[7] = "hel0lo";
	size_t n = 3;
	result = ft_memchr(s, 48, n);
	if (result)
		printf("%s\n", result);
}*/