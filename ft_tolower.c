int ft_tolower(int i)
{
	if ('a' <= i && i <= 'z')
		return (i + 32);
	return (i);
}