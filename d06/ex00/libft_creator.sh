# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/19 07:26:42 by zmahomed          #+#    #+#              #
#    Updated: 2019/02/19 16:30:18 by zmahomed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#! /bin.bash
gcc -c ft_putchar.c ft_putstr.c ft_swap.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_swap.o ft_strlen.o ft_strcmp.o
