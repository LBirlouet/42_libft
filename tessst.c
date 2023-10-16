#include "libc.h"
#include "stdio.h"



size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

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

size_t	ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	s1_size;
	size_t	start_str;
	size_t	final_str;
	char	*ret;

	i = 0;
	s1_size = ft_strlen(s1);
    start_str = start_indice(s1, set);
	return (start_str);

}

int main()
{
    printf("%zu\n", ft_strtrim("tetss8ssset", "tse"));
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