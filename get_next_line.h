/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:34:13 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/28 17:15:44 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

char	*get_next_line(int fd);

char	*parse_line(char *line_buf);

char	*trunc_line_buf(char *line_buf);

int	read_line(int fd, char **tmp);

int 	ft_strlen(const char *str);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strdup(const char *str);

int		get_len(char *line_buf);

int 	contains_newline(char *line_buf);

#endif
