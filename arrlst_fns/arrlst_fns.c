/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrlst_fns.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 17:09:25 by eamsalem          #+#    #+#             */
/*   Updated: 2024/11/27 18:44:53 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	init_arrlst(t_arrlst *list, int	capacity)
{
	list->capacity = capacity;
	list->count = 0;
	list->content = malloc(sizeof(void *) * capacity);
	if (!list->content)
		list->capacity = 0;
}

static void **grow_array(t_arrlst *list, int old_capacity, int new_capacity)
{
	void	**new_array;

	new_array = malloc(sizeof(void *) * new_capacity);
	if (!new_array)
		return NULL;
	ft_memcpy(new_array, list->content, (old_capacity * sizeof(void *)));
	free(list->content);
	return (new_array);
}

static int	grow_capacity(int old_capacity)
{
	return (old_capacity * 2);
}

void	append_arrlst(t_arrlst *list, void *data)
{
	int	old_capacity;
	
	if (list->capacity < list->count + 1)
	{
		old_capacity = list->capacity;
		list->capacity = grow_capacity(old_capacity);
		list->content = grow_array(list, old_capacity, list->capacity);
		if (!list->content)
			return ;	
	}
	list->content[list->count] = data;
	list->count++;
}

void	free_arrlst(t_arrlst *list, void (*del)(void *))
{
	int	i;

	i = 0;
	while (i < list->count)
		del((list->content)[i++]);
	free(list->content);
}
/*
int main(void)
{
	char		*str = "hello my name is Eden";
	char		**split;
	t_arrlst	*list = malloc(sizeof(t_arrlst));
	int			i = 0;
	int			j = 0;

	init_arrlst(list, 3);
	split = ft_split(str, ' ');
	while (split[i])
	{
		append_arrlst(list, (void *)split[i]);
		i++;
	}
	while (j < list->count)
	{
		ft_printf("%s\n", (char *)list->content[j]);
		j++;
	}
	free_arrlst(list, free);
	free(list);
	free(split);
}
*/