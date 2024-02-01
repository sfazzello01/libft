#include <string.h>

char *ft_strcpy(char *dest, const char *src)
{
	int	i;
	int l;

	i = 0;
	l = ft_strlen(src);
	while (i<l)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}