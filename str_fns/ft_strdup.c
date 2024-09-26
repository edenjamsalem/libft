/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 18:54:35 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/26 09:29:46 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 

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
/*
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_strdup("hello"));
}*/
