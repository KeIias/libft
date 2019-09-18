/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_create_elem.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 12:01:44 by algautie          #+#    #+#             */
/*   Updated: 2019/09/18 12:01:45 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
