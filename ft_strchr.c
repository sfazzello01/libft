#include <string.h>

char *strchr(const char *str, int c)
{
	int i;
	int l;

	l = ft_strlen(str);
	i = 0;
	while(i <= l)
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (NULL);
}