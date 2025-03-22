/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 16:32:24 by aitafern          #+#    #+#             */
/*   Updated: 2025/02/16 14:58:46 by aitafern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(char const *str, ...);
int	ft_strlen(const char *str);
int	ft_c_conversion(int c);
int	ft_s_conversion(char *str);
int	ft_d_conversion(int n);
int	ft_u_conversion(unsigned int n);
int	ft_x_conversion(unsigned int n, char c);
int	ft_p_conversion(void *n);

#endif