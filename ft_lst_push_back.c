#include "libft.h"

void	ft_lst_push_back(t_dlist **beg, int value)
{
	t_dlist *new_elem;

	if (*beg)
	{
		new_elem = *beg;
		while (new_elem->next != NULL)
			new_elem = new_elem->next;
		new_elem->next = ft_lst_create_elem(value);
	}
	else
		*beg = ft_lst_create_elem(value);
}
