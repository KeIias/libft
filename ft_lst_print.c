/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:01:55 by algautie          #+#    #+#             */
/*   Updated: 2019/09/18 12:01:56 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (lst->next != NULL)
			ft_putchar(' ');
		lst = lst->next;
	}
	ft_putchar('\n');
}
