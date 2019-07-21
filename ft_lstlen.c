#include "libft.h"

int		ft_lstlen(t_dlist *beg)
{
	t_dlist	*tmp;
	int		size;

	size = 0;
	tmp = beg;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
