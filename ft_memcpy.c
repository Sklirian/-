
#include "libft.h"

void	*ft_memcpy(void *restrict dst,
		const void *restrict src,
		size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dst);
}
