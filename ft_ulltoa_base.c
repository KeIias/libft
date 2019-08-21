/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 16:01:31 by algautie          #+#    #+#             */
/*   Updated: 2019/08/21 16:02:29 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_ulltoa_base(unsigned long long value, int base)
{
	int					i;
	unsigned long long	tmp;
	char				*str;

	i = 0;
	if (value == 0)
		i = 1;
	tmp = value;
	while (tmp && ++i)
		tmp = tmp / base;
	if (!(str = (char*)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	str[i] = '\0';
	tmp = value;
	while (i--)
	{
		str[i] = (tmp % base < 10 ? tmp % base + '0' :\
				(tmp % base - 10 + 'A'));
		tmp = tmp / base;
	}
	return (str);
}
