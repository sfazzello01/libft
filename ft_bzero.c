#include <string.h>

void *ft_bzero(void *dest, size_t num)
{
	unsigned char *p = dest;
	while (num-- > 0)
	{
		*p++ = (unsigned char)0;
	}
}
