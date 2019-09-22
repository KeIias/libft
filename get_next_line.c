/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algautie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/03 13:46:25 by algautie          #+#    #+#             */
/*   Updated: 2019/09/22 13:33:43 by algautie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*get_line(char **txt, int fd, char *line)
{
	int			i;
	char		*tmp;

	if (ft_strchr(txt[fd], '\n'))
	{
		i = 0;
		while (txt[fd][i] != '\n')
			i++;
		if (!(line = ft_strsub(txt[fd], 0, i)))
			return (0);
		tmp = txt[fd];
		if (!(txt[fd] = ft_strsub(tmp, i + 1, ft_strlen(tmp))))
			return (0);
		free(tmp);
	}
	else
	{
		if (!(line = ft_strdup(txt[fd])))
			return (0);
		ft_strdel(&txt[fd]);
	}
	return (line);
}

int				get_next_line(int fd, char **line)
{
	static char	*txt[65536];
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	int			ret;

	if (BUFF_SIZE < 1 || fd > 65535 || !line || fd < 0 ||
			(!txt[fd] && !(txt[fd] = ft_strnew(1))))
		return (-1);
	while (!(ft_strchr(txt[fd], '\n')) && (ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = txt[fd];
		txt[fd] = ft_strjoin(tmp, buff);
		free(tmp);
	}
	if (ret == -1)
		return (-1);
	if (!(*line = get_line(txt, fd, *line)))
		return (-1);
	if (ft_strlen(*line) == 0 && !txt[fd])
		return (0);
	return (1);
}
