/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubble_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 15:54:38 by eamsalem          #+#    #+#             */
/*   Updated: 2025/05/27 06:23:58 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	rev_bubble_sort_arr(int *arr, int size)
{
	int	i;
	int	swaps;

	while (1)
	{
		swaps = 0;
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] < arr[i + 1])
			{
				ft_swap(&arr[i], &arr[i + 1]);
				swaps++;
			}
			i++;
		}
		if (swaps == 0)
			break ;
	}
}

void	bubble_sort_arr(int *arr, int size)
{
	int	i;
	int	swaps;

	while (1)
	{
		swaps = 0;
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				ft_swap(&arr[i], &arr[i + 1]);
				swaps++;
			}
			i++;
		}
		if (swaps == 0)
			break ;
	}
}
