/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 18:15:11 by eamsalem          #+#    #+#             */
/*   Updated: 2024/08/02 15:50:00 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h" 

static int	get_len(int nbr)
{
	int	len;

	if (nbr == 0)
		return (1);
	len = 0;
	while (nbr != 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static int	get_pwr(int base_unit)
{
	int	pwr;

	pwr = 1;
	while (base_unit > 1)
	{
		pwr *= 10;
		base_unit--;
	}
	return (pwr);
}

static char	*get_str(int nbr, char *str, int len)
{
	int	i;
	int	base_unit;
	int	chr;

	i = 0;
	base_unit = len;
	if (nbr < 0)
	{
		str[0] = '-';
		base_unit--;
		i++;
	}
	else
		nbr = -nbr;
	while (i < len)
	{
		chr = (nbr / get_pwr(base_unit));
		str[i++] = -chr + '0';
		nbr -= (chr * get_pwr(base_unit));
		base_unit--;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*str;

	len = get_len(nbr);
	if (nbr < 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str = get_str(nbr, str, len);
	return (str);
}
/*
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	printf("%str\nbr", ft_itoa(INT_MAX));
	printf("%str\nbr", ft_itoa(12345));
	printf("%str\nbr", ft_itoa(-12345));
	printf("%str\nbr", ft_itoa(INT_MIN));
	printf("%str\nbr", ft_itoa(0));
}*/
