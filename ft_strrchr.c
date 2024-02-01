#include <string.h>

char *ft_strrchr(const char *str, int c)
{
	int i;
	int l;

	l = ft_strlen(str);
	i = 0;

	while (i <= l)
	{
		if (str[l - i] == c)
			return (str + l - i);
		i++;
	}
	return (NULL);
}