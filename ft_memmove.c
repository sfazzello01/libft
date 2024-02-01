#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned char *temp;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	temp = (unsigned char *)malloc(sizeof(unsigned char) * n);
	if (!temp)
		return (NULL);
	ft_memcpy(temp, s, n);
	ft_memcpy(d, temp, n);
	free(temp);
	return (dest);
}