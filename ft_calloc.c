
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = (void *)malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, nmemb * size);
	return (mem);
}
