#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ret_str;
	int		str_size;

	str_size = 0;
	while (s1[str_size])
		str_size++;
	ret_str = (char *)malloc(str_size + sizeof(char));
	if (ret_str == 0x0)
		return (ret_str);
	ret_str[str_size] = (char) s1[str_size];
	while (str_size--)
		ret_str[str_size] = (char) s1[str_size];
	return (ret_str);
}
