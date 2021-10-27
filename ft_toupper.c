int	ft_toupper(int c)
{
	if (c - 32 >= 'A' && c - 32 <= 'Z')
		return (c - 32);
	return (c);
}
