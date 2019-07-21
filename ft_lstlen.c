#include "libft.h"

int		ft_lstlen(t_dlist *beg)
{
	t_dlist	*tmp;
	int		size;

	size = 0;
	tmp = beg;
	while (++size && tmp->next != NULL)
		tmp = tmp->next;
	return (size);
}
