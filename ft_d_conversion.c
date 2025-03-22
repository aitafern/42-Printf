/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_d_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 19:30:37 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/16 15:00:44 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d_conversion(int n)
{
	char	num[11];
	int		count;
	int		i;

	count = 0;
	i = 0;
	if (n == -2147483648)
		return (write (1, "-2147483648", 11));
	if (n == 0)
		return (write(1, "0", 1));
	if (n < 0)
	{
		n = n * -1;
		count += write(1, "-", 1);
	}
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

/*int main()
{
	//ft_d_conversion(1234);
	printf("\n%i", ft_d_conversion(-214748));
	return(0);
}*/
