/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_push_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:02:16 by algautie          #+#    #+#             */
/*   Updated: 2019/09/18 12:02:17 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_front(t_dlist **beg, int value)
{
	t_dlist *new_elem;

	new_elem = ft_lst_create_elem(value);
	if (*beg)
		new_elem->next = *beg;
	*beg = new_elem;
}
