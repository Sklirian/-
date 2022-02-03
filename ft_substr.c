
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char			*new;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	new = (char *)malloc(sizeof(char) * (len + 1));
	if (!new)
		return (NULL);
	while (s[i + start] && len-- && start < ft_strlen(s))
	{
		new[i] = s[i + start];
		i++;
	}
	new[i] = '\0';
	return (new);
}
