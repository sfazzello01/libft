int ft_toupper(int i){
	if ('a' <= i && i <= 'z')
		return (i - 32);
	return (i);
}