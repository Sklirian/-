
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	i;
	char	*str;
	int		j;

	j = 0;
	i = (char)c;
	str = (char *)s;
	while (str[j])
		j++;
	while (j >= 0)
	{
		if (str[j] == i)
			return (&str[j]);
		j--;
	}
	return (NULL);
}
