#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	const char		*strbuff;
	unsigned int	i;

	strbuff = str;
	i = 0;
	while (n--)
	{
		if (strbuff[i] == c)
			return ((void *)&str[i]);
		i++;
	}
	return (0);
}
