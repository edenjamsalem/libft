/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:38:05 by user              #+#    #+#             */
/*   Updated: 2024/09/26 10:28:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h" 

static int	print_arg(int fd, char format_specifier, va_list args)
{
	if (format_specifier == 'c')
		return (ft_putchar_fd(fd, (char)va_arg(args, int)));
	else if (format_specifier == 's')
		return (ft_putstr_fd(fd, va_arg(args, char *)));
	else if (format_specifier == 'p')
		return (ft_putaddr_fd(fd, va_arg(args, void *)));
	else if (format_specifier == 'd' || format_specifier == 'i')
		return (ft_putnbr_fd(fd, va_arg(args, int)));
	else if (format_specifier == 'x')
		return (ft_putnbr_base_fd(fd, va_arg(args, unsigned int), "0123456789abcdef"));
	else if (format_specifier == 'X')
		return (ft_putnbr_base_fd(fd, va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (format_specifier == 'u')
		return (ft_putusnbr_fd(fd, va_arg(args, unsigned int)));
	else if (format_specifier == '%')
		return (ft_putchar_fd(fd, '%'));
	return (0);
}

int	ft_fprintf(int fd, const char *format, ...)
{
	va_list	args;
	char	*specifiers_set;
	int		i;
	int		count;

	specifiers_set = "cspdiuxX%";
	va_start(args, format);
	i = 0;
	count = 0;
	while (format[i])
	{
		if (chrsetcmp(format[i], "%"))
		{
			if (chrsetcmp(format[i + 1], specifiers_set))
				count += print_arg(fd, format[i++ + 1], args);
		}
		else
		{
			write(fd, &format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}