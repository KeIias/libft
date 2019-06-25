/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 12:22:52 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 14:40:07 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t lenl;

	if (*needle == '\0')
		return ((char*)haystack);
	lenl = ft_strlen(needle);
	while (*haystack && len-- >= lenl)
	{
		if (*haystack == *needle && ft_memcmp(haystack, needle, lenl) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
