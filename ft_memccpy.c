#include <string.h>

void *ft_memccpy(void *restrict s1, const void *restrict s2, int c, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;

	d = (unsigned char *)s1;
	s = (const unsigned char *)s2;
	while (n-- > 0)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return (d + 1);
		d++;
		s++;
	}
	return (NULL);
}