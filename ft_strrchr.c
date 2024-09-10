/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:39:36 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/09 13:38:26 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// Returns a pointer to the last occurrence of a chr in a str.

const char	*ft_strrchr(const char *str, int chr)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (chr == '\0')
		return (&str[i]);
	while (i >= 0)
	{
		if (str[i] == (unsigned char)chr)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("%p\n", ft_strrchr("hello", 'l'));
	printf("%p\n", ft_strrchr("hello", 'b'));
	printf("%p\n", ft_strrchr("hello", '\0'));
}*/
