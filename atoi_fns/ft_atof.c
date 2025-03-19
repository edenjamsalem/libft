/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atof.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eamsalem <eamsalem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 12:22:29 by eamsalem          #+#    #+#             */
/*   Updated: 2025/03/19 17:10:03 by eamsalem         ###   ########.fr       */
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

int	get_int_part(const char *str, int i)
{
	int		nbr_int;

	nbr_int = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr_int *= 10;
		nbr_int += str[i] - '0';
		i++;
	}
	return (nbr_int);
}

double	ft_atof(const char *str)
{
	double	nbr;
	int		sign;
	int		i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	sign = 1;
	if (str[0] == '-')
	{
		i++;
		sign = -1;
	}
	nbr = get_int_part(str, i);
	nbr += get_decimal_part(str);
	return (nbr * sign);
}

// int main(void)
// {
// 	char *str = "0.0";
// 	char *str1 = "-0.5";

// 	printf("nbr = %f\n", ft_atof(str));
// 	printf("nbr = %f\n", ft_atof(str1));
// }
