/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 12:12:09 by algautie          #+#    #+#             */
/*   Updated: 2018/11/24 12:12:10 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	int				i;
	int				j;

	i = 0;
	if (n < 0)
	{
		n = -n;
		ft_putchar_fd('-', fd);
	}
	nb = n;
	while (nb >= 10 && ++i)
		nb = nb / 10;
	while (i >= 0)
	{
		j = i;
		nb = n;
		while (j--)
			nb = nb / 10;
		ft_putchar_fd(nb % 10 + '0', fd);
		i--;
	}
}
