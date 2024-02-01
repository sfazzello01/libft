#include <string.h>

char *ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(src);
	while (i < n)
	{
		if (i < l)
			dest[i] = src[i];
		else
			dest[i] = '\0';
		i++;
	}
	return (dest);
}