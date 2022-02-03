
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	id;

	i = 0;
	id = 0;
	while (dst[id] != '\0')
		id++;
	if (siz - 1 > id && siz > 0)
	{
		while (src[i] != '\0' && siz - id - i > 1)
		{
			dst[id + i] = src[i];
			i++;
		}
		dst[id + i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	if (id >= siz)
		id = siz;
	return ((size_t) i + id);
}
