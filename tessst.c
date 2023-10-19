#include "libc.h"
#include "stdio.h"

int	c_nbr(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = i + 1;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int main()
{
    printf("%d\n", c_nbr(0));
}



/*{
    char *src = "1234";
    char dest[16] = {"abc"};
    size_t ret = strlcat(dest, src, 2);
    printf("%s\n ret = %zu", dest, ret );
}*/

/*{
    char *src = "";
    char    dest[15];
    size_t ret = strlcpy(dest, src, 10);
    printf("%s\n ret = %zu", dest, ret );
}*/