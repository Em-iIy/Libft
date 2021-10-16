#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*d;

	d = b;
	while (len--)
		d[len] = c;
	return (b);
}
