/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:33:54 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/26 09:32:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strlen("hello"));
	printf("%d\n", ft_strlen(""));
	printf("%d\n", ft_strlen("123456789"));
}*/
