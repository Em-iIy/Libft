#include "libft.h"

char	*ft_strmapi(const char	*s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	if (!s)
		return (0);
	ret = (char *)malloc(ft_strlen(s) + 1);
	if (ret == 0x0)
		return (ret);
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
