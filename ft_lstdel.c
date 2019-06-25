/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:15:15 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 11:15:15 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *cur;
	t_list *nxt;

	cur = *alst;
	while (cur)
	{
		nxt = cur->next;
		del(cur->content, cur->content_size);
		free(cur);
		cur = nxt;
	}
	*alst = NULL;
}
