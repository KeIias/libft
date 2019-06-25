/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 12:23:05 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 14:43:07 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	char	*str;

	if (*needle == '\0')
		return ((char*)haystack);
	i = ft_strlen(needle);
	str = (char *)haystack;
	while (*str)
	{
		if (*str == *needle && ft_memcmp(str, needle, i) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
