/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 11:16:12 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 11:16:14 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*psrc;
	char	*pdst;

	i = 0;
	psrc = (char *)src;
	pdst = (char *)dst;
	if (psrc < pdst)
		while (len--)
			pdst[len] = psrc[len];
	else
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	return (dst);
}
