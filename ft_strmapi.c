
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned
				int, char))
{
	size_t	i;
	char	*new;

	if (!s || !f)
		return (NULL);
	i = 0;
	new = ft_strdup(s);
	if (!new)
		return (NULL);
	while (new[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}
