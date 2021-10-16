int	ft_tolower(int c)
{
	if (c + 32 >= 'a' && c + 32 <= 'z')
		return (c + 32);
	else
		return (c);
}
