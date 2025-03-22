# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aitafern <aitafern@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/09 15:51:10 by aitafern          #+#    #+#              #
#    Updated: 2025/02/16 15:00:03 by aitafern         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror

RM = /bin/rm -f

OBJS = ft_c_s_conversions.o \
	ft_d_conversion.o \
	ft_p_conversion.o \
	ft_printf.o \
	ft_strlen.o \
	ft_u_conversion.o \
	ft_x_conversion.o 
	
NAME = libftprintf.a

.PHONY: all clean fclean re

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS): ft_printf.h

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
