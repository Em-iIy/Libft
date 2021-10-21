#include "libft.h"

static int	ft_digits(int n)
{
	int	digits;

	digits = 1;
	while (n >= 10)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

static char	*ft_fill(int n, int digits, int neg, char *ret)
{
	int	i;

	i = 0;
	if (neg < 0)
	{
		ret[i] = '-';
		i++;
	}
	ret[digits] = 0;
	while (i < digits)
	{
		digits--;
		ret[digits] = n % 10 + '0';
		n /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	int		digits;
	int		neg;
	char	*ret;

	neg = 1;
	digits = 1;
	if (n == INT_MIN)
		digits = 11;
	else if (n < 0)
	{
		neg = -1;
		digits = ft_digits(n * -1) + 1;
	}
	else
		digits = ft_digits(n);
	ret = (char *)malloc((digits + 1) * sizeof(char));
	if (ret == 0x0)
		return (ret);
	if (n == INT_MIN)
	{
		ft_strlcpy(ret, "-2147483648", 12);
		return (ret);
	}
	ret = ft_fill(n * neg, digits, neg, ret);
	return (ret);
}
