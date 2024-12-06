/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 16:48:58 by eamsalem          #+#    #+#             */
/*   Updated: 2024/12/05 16:49:52 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	dict_size(t_dict *dict)
{
	int	size;

	size = 0;
	while (dict)
	{
		size++;
		dict = dict->next;
	}
	return (size);
}