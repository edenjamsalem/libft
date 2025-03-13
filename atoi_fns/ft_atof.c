/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:22:29 by eamsalem          #+#    #+#             */
/*   Updated: 2025/02/26 19:19:22 by eamsalem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

double	get_decimal_digit(char c, int decimal_index)
{
	double	digit;

	digit = c - '0';
	while (decimal_index > 0)
	{
		digit /= 10;
		decimal_index--;
	}
	return (digit);
}

double	get_decimal_part(const char *str)
{
	int		i;
	int		decimal_index;
	double	nbr;

	i = 0;
	while (str[i] && str[i] != '.')
		i++;
	if (!str[i])
		return (0.0);
	nbr = 0;
	decimal_index = 1;
	while (ft_isdigit(str[++i]))
	{
		nbr += get_decimal_digit(str[i], decimal_index);
		decimal_index++;
	}
	return (nbr);
}

double	ft_atof(const char *str)
{
	double	nbr;

	nbr = ft_atoi(str);
	nbr += get_decimal_part(str);
	return (nbr);
}
/*
int main(void)
{
	char *str = "0.0";
	char *str1 = "-10.0";

	printf("nbr = %f\n", ft_atof(str));
	printf("nbr = %f\n", ft_atof(str1));
}
*/