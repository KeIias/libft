#include "libft.h"

void	ft_lst_push_front(t_dlist **beg, int value)
{
	t_dlist *new_elem;

	new_elem = ft_lst_create_elem(value);
	if (*beg)
		new_elem->next = *beg;
	*beg = new_elem;
}
