/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_arrlcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 16:53:49 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/26 10:48:43 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h> 

int	*int_arrlcpy(int *dest, int *src, int size)
{
	int	i;
	int	*tmp;

	if (!src || !dest)
		return (NULL);
	i = 0;
	tmp = dest;
	while (i < size)
	{
		*tmp = *src;
		tmp++;
		src++;
	}
	return (dest);
}
