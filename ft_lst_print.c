#include "libft.h"

void	ft_lst_print(t_dlist *beg)
{
	t_dlist *lst;

	lst = beg;
	if (ft_lstlen(lst) < 1)
		return ;
	while (lst != NULL)
	{
		ft_putnbr(lst->value);
		ft_putchar(' ');
		lst = lst->next;
	}
}
