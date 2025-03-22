/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 15:55:24 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/16 15:07:13 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	read_format(va_list list, char c)
{
	int		count;

	count = 0;
	if (c == 'd' || c == 'i')
		count = ft_d_conversion(va_arg(list, int));
	else if (c == 'c')
		count = ft_c_conversion(va_arg(list, int));
	else if (c == 's')
		count = ft_s_conversion(va_arg(list, char *));
	else if (c == '%')
		count = write(1, "%", 1);
	else if (c == 'u')
		count = ft_u_conversion(va_arg(list, unsigned int));
	else if (c == 'p')
		count = ft_p_conversion(va_arg(list, void *));
	else if (c == 'x')
		count = ft_x_conversion(va_arg(list, unsigned int), c);
	else if (c == 'X')
		count = ft_x_conversion(va_arg(list, unsigned int), c);
	return (count);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(list, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i])
				len += read_format(list, str[i]);
		}
		else
		{
			write(1, &str[i], 1);
			len++;
		}
		i++;
	}
	va_end(list);
	return (len);
}
