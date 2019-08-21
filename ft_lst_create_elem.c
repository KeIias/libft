#include "libft.h"

t_dlist		*ft_lst_create_elem(int value)
{
	t_dlist *new_elem;

	if (!(new_elem = (t_dlist*)malloc(sizeof(t_dlist))))
		return (NULL);
	else
	{
		new_elem->value = value;
		new_elem->info = 'n';
		new_elem->next = NULL;
	}
	return (new_elem);
}
