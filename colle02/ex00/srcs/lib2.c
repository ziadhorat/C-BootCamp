/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 08:54:25 by zmahomed          #+#    #+#             */
/*   Updated: 2019/03/03 09:05:48 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"

/*
** HANDLES THE PRINTING OF THE RUSH NAME
*/

void	print_format(int r, int c, int num, int rush)
{
	if (num > 1)
		ft_putstr(" || ");
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] ");
	ft_putchar('[');
	ft_putnbr(c);
	ft_putstr("] [");
	ft_putnbr(r);
	ft_putchar(']');
}

/*
** USED FOR CREATING THE RUSHES FOR STRING COMPARE
*/

char	*pt_line(int width, char corn, char fill, char corn2)
{
	char	*str;
	int		i;

	str = (char*)malloc(sizeof(char) * (width + 1));
	i = 0;
	str[i] = corn;
	i++;
	while (--width > 1)
	{
		str[i] = fill;
		i++;
	}
	if (width == 1)
	{
		str[i] = corn2;
		i++;
	}
	str[i] = '\n';
	str[i + 1] = '\0';
	return (str);
}
