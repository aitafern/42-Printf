/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 17:53:42 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/16 15:01:24 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*int	ft_x_conversion(unsigned int n, char c)
{
	char	num_hex[8];
	int		mod;
	int		i;
	int		count;

	i = -1;
	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	while (++i, n > 0)
	{
		mod = n % 16;
		n = n / 16;
		if (0 <= mod && mod <= 9)
			num_hex[i] = mod + '0';
		else if (10 <= mod && mod <= 15 && c == 'x')
			num_hex[i] = 'a' + (mod - 10);
		else if (10 <= mod && mod <= 15 && c == 'X')
			num_hex[i] = 'A' + (mod - 10);
	}
	while (--i >= 0)
		count += write(1, &num_hex[i], 1);
	return (count);
}*/

int	ft_x_conversion(unsigned int n, char c)
{
	char	num_hex[16];
	int		mod;
	char	*ptr_hex;
	int		count;

	if (n == 0)
		return (write(1, "0", 1));
	ptr_hex = num_hex;
	count = 0;
	while (n > 0)
	{
		mod = n % 16;
		n = n / 16;
		if (0 <= mod && mod <= 9)
			*ptr_hex++ = mod + '0';
		else if (10 <= mod && mod <= 15 && c == 'x')
			*ptr_hex++ = 'a' + (mod - 10);
		else if (10 <= mod && mod <= 15 && c == 'X')
			*ptr_hex++ = 'A' + (mod - 10);
	}
	while (ptr_hex > num_hex)
		count += write(1, --ptr_hex, 1);
	return (count);
}
/*int main ()
{
	printf("\n%i", ft_x_conversion(65242892, 'x'));
	printf("\n");
	printf("%x", 65242892);
	return (0);
}*/