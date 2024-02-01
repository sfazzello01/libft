#include <string.h>

char *ft_strnstr(const char *haystack, const char *needle, int n)
{
	int i;
	int j;
	int l;

	l = ft_strlen(haystack);
	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while (i < l && (i <= n - ft_strlen(needle)))
	{
		j = 0;
		if (haystack[i] == needle[j])
			while (haystack[i + j] == needle[j])
			{
				if (j == ft_strlen(needle) - 1)
					return ((char *)haystack + i);
				j++;
			}
	}
	return (NULL);
}