char	*ft_strrchr(const char *str, int c)
{
	int		ret_index;
	int		i;

	i = 0;
	ret_index = -1;
	while (str[i])
	{
		if (str[i] == (char)c)
			ret_index = i;
		i++;
	}
	if (!(str[i]) && (char)c == 0)
		return ((char *)&str[i]);
	if (ret_index == -1)
		return (0);
	return ((char *)&str[ret_index]);
}
