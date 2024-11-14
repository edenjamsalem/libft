/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:07:31 by eamsalem          #+#    #+#             */
/*   Updated: 2024/11/14 13:26:28 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// THIS FUNCTION PARSES A STR OF FORM "KEY=VALUE" AND STORES IN A NEW DICT NODE
/*
static char	*get_key(char const *str, const char *equal_sign)
{
	int		key_len;
	char	*key;

	if (!str || !(*str))
		return (NULL);
	key_len = equal_sign - str;
	key = malloc(sizeof(char) * (key_len + 1));
	if (!key)
		return (NULL);
	ft_strlcpy(key, str, key_len + 1);
	return (key);
}
*/
static void	assign_keyvalue(char *str, t_dict *dict)
{
	char	*equal_sign;
	
	equal_sign = (char *)ft_strchr(str, '=');
	if (equal_sign)
	{
		dict->key = ft_strcut(str, equal_sign);
		dict->value = ft_strdup(equal_sign + 1);
	}
	else
	{
		dict->key = ft_strdup(str);
		dict->value = NULL;
	}
}

t_dict	*str_to_dict(char *str)
{
	t_dict		*dict;

	if (!str || !(*str))
		return (NULL);
	dict = malloc(sizeof(t_dict));
	if (!dict)
		return (NULL);
	assign_keyvalue(str, dict);
	dict->next = NULL;
	dict->prev = NULL;
	return (dict);
}
