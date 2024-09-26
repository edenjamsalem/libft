/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:04:50 by user              #+#    #+#             */
/*   Updated: 2024/09/26 10:19:35 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_putaddr_fd(int fd, void *ptr)
{
	if (!ptr)
		return (ft_putstr_fd(fd, "(nil)"));
	write(fd, "0x", 2);
	return (ft_putuslong_base_fd(fd, (unsigned long)ptr, "0123456789abcdef") + 2);
}
