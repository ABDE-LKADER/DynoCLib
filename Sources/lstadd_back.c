#include "../DynoCLib.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	node = *lst;
	node = ft_lstlast(node);
	node->next = new;
}
