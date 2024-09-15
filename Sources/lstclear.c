#include "../DynoCLib.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*node;
	t_list	*loop;

	if (!lst || !del)
		return ;
	node = *lst;
	while (node)
	{
		loop = node->next;
		ft_lstdelone(node, del);
		node = loop;
	}
	*lst = NULL;
}
