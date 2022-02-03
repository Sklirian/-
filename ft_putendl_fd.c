
#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int		i;
	char	endl;

	if (!s)
		return ;
	i = 0;
	endl = '\n';
	while (*(s + i) != '\0')
	{
		i++;
	}
	write(fd, s, i);
	write(fd, &endl, 1);
}
