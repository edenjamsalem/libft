/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcut.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 11:59:08 by eamsalem          #+#    #+#             */
/*   Updated: 2024/11/15 12:00:03 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// This function makes a copy of a str segment between two pointers
char	*ft_strcut(char *start, char *end)
{
	char 	*segment;
	char 	*tmp;

	if (!start || !end)
		return (NULL);
	segment = malloc(sizeof(char) * (end - start + 1));
	if (!segment)
		return (NULL);
	tmp = segment;
	while (start < end)
		*tmp++ = *start++;
	*tmp = '\0';
	return (segment);
}