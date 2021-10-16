#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret_str;
	unsigned int	i;

	i = 0;
	ret_str = (char *)malloc((len + 1) * sizeof(char));
	if (ret_str == 0x0)
		return (ret_str);
	while (i < len && s[start + i] && start < ft_strlen(s))
	{
		ret_str[i] = s[start + i];
		i++;
	}
	ret_str[i] = 0;
	return (ret_str);
}
