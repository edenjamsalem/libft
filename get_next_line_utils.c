/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 17:30:44 by eamsalem          #+#    #+#             */
/*   Updated: 2024/10/08 20:23:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat_str;
	int		concat_len;
	int		i;
	int		j;

	concat_len = ft_strlen(s1) + ft_strlen(s2);
	concat_str = malloc(sizeof(char) * (concat_len + 1));
	if (!concat_str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		concat_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
		concat_str[i++] = s2[j++];
	concat_str[i] = '\0';
	return (concat_str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint_str;
	int		s1_len;
	int		s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joint_str = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!joint_str)
		return (NULL);
	ft_strlcpy(joint_str, s1, s1_len + 1);
	ft_strlcpy(joint_str + s1_len, s2, s2_len + 1);
	return (joint_str);
}

char	*ft_strdup(const char *str)
{
	char	*cpy;
	int		i;

	if (!str || !(*str))
		return (NULL);
	cpy = malloc((ft_strlen(str) + 1) * sizeof(char));
	if (!cpy)
		return (NULL);
	i = 0;
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

int		get_len(char *line_buf)
{
	int	i;

	i = 0;
	while (line_buf[i] && line_buf[i] != '\n')
		i++;
	return (i);
}

int	contains_newline(char *line_buf)
{
	int	i;

	i = 0;
	while (line_buf[i])
	{
		if (line_buf[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}