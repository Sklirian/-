
#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*sou;
	char		*des;

	if (!dst && !src)
		return (NULL);
	sou = (const char *) src;
	des = (char *) dst;
	if (sou > des)
	{
		while (len--)
			*des++ = *sou++;
	}
	else
	{
		while (len--)
			*(des + len) = *(sou + len);
	}
	return (dst);
}
