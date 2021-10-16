#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	ret_str = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (ret_str == 0x0)
		return (ret_str);
	while (s1[i])
	{
		ret_str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ret_str[i + j] = s2[j];
		j++;
	}
	ret_str[i + j] = 0;
	return (ret_str);
}
