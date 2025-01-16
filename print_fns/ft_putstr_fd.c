/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 15:16:24 by eamsalem          #+#    #+#             */
/*   Updated: 2024/09/26 10:00:56 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putstr_fd(int fd, char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(fd, &str[i++], 1);
	return (i);
}
