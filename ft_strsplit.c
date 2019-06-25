/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 12:23:01 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 12:23:01 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		countlen(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		n;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	tab = (char **)malloc(sizeof(*tab) * (ft_wnbr((const char *)s, c) + 1));
	if (tab == NULL)
		return (NULL);
	n = ft_wnbr((const char*)s, c);
	while (n--)
	{
		while (*s == c && *s != '\0')
			s++;
		tab[i] = ft_strsub((const char *)s, 0, countlen((const char *)s, c));
		if (tab[i] == NULL)
			return (NULL);
		s = s + countlen(s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
