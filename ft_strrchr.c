char	*ft_strrchr(const char *str, int c)
{
	int		ret_index;
	int		i;
	void	*null;

	i = 0;
	ret_index = -1;
	null = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			ret_index = i;
		i++;
	}
	if (!(str[i]) && c == 0)
		return ((char *)&str[i]);
	if (ret_index == -1)
		return (null);
	return ((char *)&str[ret_index]);
}
