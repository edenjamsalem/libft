/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_dict_entry.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 12:26:54 by eamsalem          #+#    #+#             */
/*   Updated: 2024/11/14 16:12:32 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_dict	*get_dict_entry(char *key, t_dict *dict)
{
	while (dict)
	{
		if (MATCH(key, dict->key))
			return (dict);
		dict = dict->next;
	}
	return (NULL);
}