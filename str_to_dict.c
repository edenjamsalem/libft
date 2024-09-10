/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_to_dict.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:07:31 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/06 14:50:11 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// THIS FUNCTION PARSES A STR OF FORM "KEY=VALUE" AND STORES IN A DICT

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

t_dict	*str_to_dict(char const *str)
{
	t_dict		*dict;
	const char	*equal_sign;

	if (!str || !(*str))
		return (NULL);
	dict = malloc(sizeof(t_dict));
	if (!dict)
		return (NULL);
	equal_sign = ft_strchr(str, '=');
	if (equal_sign)
	{
		dict->key = get_key(str, equal_sign);
		dict->value = ft_strdup(equal_sign + 1);
	}
	else
	{
		dict->key = ft_strdup(str);
		dict->value = NULL;
	}
	return (dict);
}
