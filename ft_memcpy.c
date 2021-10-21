#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dst2;
	char	*src2;

	dst2 = dst;
	src2 = (char *)src;
	if (dst == 0x0 && src == 0x0)
		return (dst);
	while (n)
	{
		n--;
		dst2[n] = src2[n];
	}
	return (dst);
}
