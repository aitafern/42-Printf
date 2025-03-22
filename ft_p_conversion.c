/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p_conversion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 11:20:56 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/16 15:15:53 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_conversion(unsigned long ptr)
{
	int		mod;
	char	adress[16];
	int		i;
	int		count;

	i = 0;
	while (ptr > 0)
	{
		mod = ptr % 16;
		ptr = ptr / 16;
		if (0 <= mod && mod <= 9)
			adress[i] = mod + '0';
		if (10 <= mod && mod <= 15)
			adress[i] = 'a' + (mod - 10);
		i++;
	}
	i--;
	count = 0;
	while (i >= 0)
	{
		count += write(1, &adress[i], 1);
		i--;
	}
	return (count);
}

int	ft_p_conversion(void *n)
{
	unsigned long	ptr;
	int				count;

	count = 0;
	if (n == NULL)
	{
		count = write(1, "(nil)", 5);
		return (count);
	}
	ptr = (unsigned long)n;
	count += write(1, "0x", 2);
	if (ptr == 0)
		count += write(1, "0", 1);
	count += hex_conversion(ptr);
	return (count);
}

/*int	main(void)
{
	unsigned long	n = 16;
	
	printf("%p\n", (void *)&n);
	ft_p_conversion((void *)&n);
	return (0);
}*/