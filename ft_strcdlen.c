/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/26 13:23:54 by algautie          #+#    #+#             */
/*   Updated: 2019/06/26 13:26:11 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcdlen(char *str, char c, int start)
{
	int i;

	i = start;
	while (str[i] && str[i] != c)
		i++;
	return (i - start);
}
