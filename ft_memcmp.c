#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned int	i;
	unsigned char	*str1_buff;
	unsigned char	*str2_buff;

	str1_buff = (unsigned char *)str1;
	str2_buff = (unsigned char *)str2;
	i = 0;
	while (n--)
	{
		if (str1_buff[i] != str2_buff[i])
			return ((int)(str1_buff[i] - str2_buff[i]));
		i++;
	}
	return (0);
}
