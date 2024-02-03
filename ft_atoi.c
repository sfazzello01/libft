#include <string.h>

int ft_atoi(const char *str)
{
	int	i;
	int	sign;

	while ( *str == ' ' || ( *str >= 9 && *str <= 13 ) )
		str++;
	sign = 1;
	while ( *str == '+' || *str == '-' )
	{
		if ( *str == '-' )
			sign *= -1;
		str++;
	}
	i = 0;
	while ( *str >= '0' && *str <= '9' )
	{
		i = i * 10 + *str - '0';
		str++;
	}
	return (i * sign);
}