#include "libft.h"

int		ft_issorted(int *tab, int size)
{
	int i;

	i = -1;
	while (++i < size - 1)
		if (tab[i] >= tab[i + 1])
			return (0);
	return (1);
}
