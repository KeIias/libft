/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:15:26 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 11:15:27 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;
	t_list *postf_elem;
	t_list *pref_elem;

	new_lst = NULL;
	if (lst && (*f))
	{
		new_lst = (*f)(lst);
		pref_elem = new_lst;
		lst = lst->next;
		while (lst)
		{
			postf_elem = (*f)(lst);
			pref_elem->next = postf_elem;
			pref_elem = postf_elem;
			lst = lst->next;
		}
		pref_elem->next = NULL;
	}
	return (new_lst);
}
