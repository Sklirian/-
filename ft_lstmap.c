
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*lst_elem;
	t_list	*next;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f(lst->content));
	if (!new_lst)
		return (NULL);
	next = lst->next;
	while (next)
	{
		lst_elem = ft_lstnew(f(next->content));
		if (!lst_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, lst_elem);
		next = next->next;
	}
	return (new_lst);
}
