int ft_isalnum(int i)
{
	if ('a' <= i && i <= 'z' || '0' <= i && i <= '9' || 'A' <= i && i <= 'Z')
		return (1);
	return (0);
}