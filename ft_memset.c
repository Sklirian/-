
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*n;

	n = (unsigned char *) b;
	while (len--)
	{
		*n++ = (unsigned char)c;
	}
	return (b);
}
