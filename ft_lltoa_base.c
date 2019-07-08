/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/03 14:07:55 by algautie          #+#    #+#             */
/*   Updated: 2019/07/03 14:10:56 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa_base(long long value, int base)
{
	int					i;
	int					neg;
	unsigned long long	tmp;
	char				*str;

	i = 0;
	if (value == 0)
		i = 1;
	neg = (value < 0 && base == 10);
	value *= (value < 0 ? -1 : 1);
	tmp = value;
	while (tmp && ++i)
		tmp = tmp / base;
	if (!(str = (char*)malloc(sizeof(char) * (i + neg + 1))))
		return (NULL);
	str[i + neg] = '\0';
	tmp = value;
	str[0] = (neg == 1 ? '-' : str[0]);
	while (i--)
	{
		str[i + neg] = (tmp % base < 10 ? tmp % base + '0' :\
				(tmp % base - 10 + 'A'));
		tmp = tmp / base;
	}
	return (str);
}
