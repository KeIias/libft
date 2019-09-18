/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:02:08 by algautie          #+#    #+#             */
/*   Updated: 2019/09/18 12:02:10 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
