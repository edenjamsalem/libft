/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 13:12:54 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/10 16:25:57 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Used a branchless programming technique which improves efficiency to
// help me learn this style

int	ft_tolower(int c)
{
	return (c += 32 * (c >= 'A' && c <= 'Z'));
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower('a'));
	printf("%c\n", ft_tolower('A'));

}*/
