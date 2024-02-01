#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
	int i;
	int l1;
	int l2;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	while (i < l1 && i < l2)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}