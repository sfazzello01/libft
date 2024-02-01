#include <string.h>

char *ft_strdup(const char *s1)
{
	char	*cp;
	int		i;
	int		l;

	i = 0;
	l = ft_strlen(s1);
	cp = (char *)malloc(l + 1);
	while (i < l)
	{
		cp[i] = s1[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}