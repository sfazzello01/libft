char *strcat(char *dest, const char *src)
{
	int i;
	int l;

	l = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}