/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:33:27 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/28 17:12:28 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*parse_line(char *line_buf)
{
	int 	i;
	char	*line;

	if (!contains_newline(line_buf))
		return (line_buf);
	line = malloc(sizeof(char) * get_len(line_buf) + 2);
	if (!line)
		return (NULL);
	i = 0;
	while (line_buf[i] && line_buf[i] != '\n')
	{
		line[i] = line_buf[i];
		i++;
	}
	line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

int	read_line(int fd, char **tmp)
{
	int bytes_read;
	
	*tmp = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!(*tmp))
		return (-1);
	bytes_read = read(fd, *tmp, BUFFER_SIZE);
	(*tmp)[bytes_read] = '\0';
	return (bytes_read);
}

char	*trunc_line_buf(char *line_buf)
{
	char	*new_buf;

	new_buf = ft_strdup(line_buf + get_len(line_buf) + 1);
	free(line_buf);
	return (new_buf);
}

char	*get_next_line(int fd)
{
	static char	*line_buf;
	char		*tmp;
	char		*line;
	int			bytes_read;

	if (fd < 0 || fd >= 100 || BUFFER_SIZE <= 0)
		return (NULL);
	if (!line_buf)
	{
		line_buf = malloc(sizeof(char));
		line_buf[0] = '\0';
	}
	bytes_read = 1;
	while (bytes_read > 0)
	{
		if (!contains_newline(line_buf))
		{
			bytes_read = read_line(fd, &tmp);	
			line_buf = ft_strjoin(line_buf, tmp);
			free(tmp);
		}
		else
		{
			line = parse_line(line_buf);
			line_buf = trunc_line_buf(line_buf);
			return (line);
		}
	}
	return (line_buf);
}
/*
int main(void)
{
	int		fd;
	char	*line;

	fd = open("test.txt", O_RDONLY);
	while (1)
	{
		line = get_next_line(fd);
		if (!line || !(*line))
		{
			free(line);
			break ;
		}
		printf("%s", line);
		free (line);
	}
	free(line);
}
*/