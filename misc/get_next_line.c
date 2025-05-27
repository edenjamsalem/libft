/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:38:23 by eamsalem          #+#    #+#             */
/*   Updated: 2025/05/27 06:24:13 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_next_line(int fd)
{
	static char	buf[10000];
	char		tmp_buf[BUFFER_SIZE + 1];
	int			bytes_read;
	char		*line;
	char		*nl;

	nl = (char *)ft_strchr(buf, '\n');
	while (!nl)
	{
		bytes_read = read(fd, tmp_buf, BUFFER_SIZE);
		if (bytes_read <= 0)
		{
			if (!buf[0])
				return (NULL);
			line = ft_strcut(buf, buf + ft_strlen(buf));
			buf[0] = '\0';
			return (line);
		}
		tmp_buf[bytes_read] = '\0';
		ft_strlcat(buf, tmp_buf, 10000);
		nl = (char *)ft_strchr(buf, '\n');
	}
	line = ft_strcut(buf, nl + 1);
	ft_strlcpy(buf, nl + 1, 10000);
	return (line);
}
