/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:30:23 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/16 15:01:17 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_u_conversion(unsigned int n)
{
	int		count;
	int		i;
	char	num[10];

	count = 0;
	i = 0;
	if (n == 0)
		return (write (1, "0", 1));
	while (n > 0)
	{
		num[i] = (n % 10) + '0';
		n = n / 10;
		i++;
	}
	while (--i >= 0)
		count += write (1, &num[i], 1);
	return (count);
}
/*int main ()
{
	printf("%i", ft_u_conversion(-8367));
	return(0);
}*/