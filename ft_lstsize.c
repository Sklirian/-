
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*iter;

	if (!lst)
		return (0);
	i = 0;
	iter = lst;
	while (iter)
	{
		iter = iter->next;
		i++;
	}
	return (i);
}
