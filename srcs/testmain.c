#include "libft.h"

#include <stdio.h>
int main()
{
	char buffer[5];

	ft_memset(buffer, 'y', sizeof(char) * 5);

	for(int i = 0; i < 5; i++)
		printf("%c", buffer[i]);
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