/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2darr_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 16:23:14 by eamsalem          #+#    #+#             */
/*   Updated: 2024/06/24 16:24:18 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_2darr_len(void **arr)
{
	int	i;

	i = 0;
	while (arr[i])
		i++;
	return (i);
}