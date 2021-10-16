#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char			*dstbuff;
	const char		*srcbuff;
	unsigned int	i;

	dstbuff = dst;
	srcbuff = src;
	i = 0;
	if (dst == 0x0 && src == 0x0)
		return (dst);
	if (dst > src)
	{
		while (n--)
			dstbuff[n] = srcbuff[n];
	}
	else
	{
		while (i < n)
		{
			dstbuff[i] = srcbuff[i];
			i++;
		}
	}
	return (dst);
}
