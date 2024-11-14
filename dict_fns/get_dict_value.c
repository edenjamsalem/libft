/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict_value.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 18:47:45 by eamsalem          #+#    #+#             */
/*   Updated: 2024/11/14 15:46:47 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*get_dict_value(char *key, t_dict *dict)
{
	while (dict)
	{
		if (MATCH(key, dict->key))
			return (dict->value);
		dict = dict->next;
	}
	return (NULL);
}