#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret_str;
	unsigned int	i;

	i = 0;
	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	else if (len > ft_strlen(s) - start)
		return (ft_strdup(s + start));
	else
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
