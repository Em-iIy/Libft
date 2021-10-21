int	ft_atoi(const char *str)
{
	int	ret_int;
	int	i;
	int	neg;

	ret_int = 0;
	i = 0;
	neg = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if ((str[i] != '-' || str[i] != '+') && (str[i] < '0' && str[i] > '9'))
		return (0);
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		ret_int *= 10;
		ret_int += str[i] - '0';
		i++;
	}
	return (ret_int * neg);
}
