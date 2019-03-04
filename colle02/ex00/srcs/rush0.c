/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush0.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/03 07:09:24 by zmahomed          #+#    #+#             */
/*   Updated: 2019/03/03 09:09:32 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"

/*
** THIS FILE CREATES THE RUSHES TO BE TESTED WITH PARAMS
** USES STRCAT TO JOIN STR AND THE NEW LINE
** RETURNS THE RUSH
*/

char	*rush00(int x, int y)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (x * y + 1));
	if (!str)
		return ("x");
	if ((x < 1) || (y < 1) || (x < 1 && y < 1))
		return (str);
	ft_strcat(str, pt_line(x, 'o', '-', 'o'));
	while (--y > 1)
		ft_strcat(str, pt_line(x, '|', ' ', '|'));
	if (y == 1)
		ft_strcat(str, pt_line(x, 'o', '-', 'o'));
	return (str);
}

char	*rush01(int x, int y)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (x * y + 1));
	if ((x < 1) || (y < 1) || (x < 1 && y < 1))
		return (str);
	ft_strcat(str, pt_line(x, '/', '*', '\\'));
	while (--y > 1)
		ft_strcat(str, pt_line(x, '*', ' ', '*'));
	if (y == 1)
		ft_strcat(str, pt_line(x, '\\', '*', '/'));
	return (str);
}

char	*rush02(int x, int y)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (x * y + 1));
	if ((x < 1) || (y < 1) || (x < 1 && y < 1))
		return (str);
	ft_strcat(str, pt_line(x, 'A', 'B', 'A'));
	while (--y > 1)
		ft_strcat(str, pt_line(x, 'B', ' ', 'B'));
	if (y == 1)
		ft_strcat(str, pt_line(x, 'C', 'B', 'C'));
	return (str);
}

char	*rush03(int x, int y)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (x * y + 1));
	if ((x < 1) || (y < 1) || (x < 1 && y < 1))
		return (str);
	ft_strcat(str, pt_line(x, 'A', 'B', 'C'));
	while (--y > 1)
		ft_strcat(str, pt_line(x, 'B', ' ', 'B'));
	if (y == 1)
		ft_strcat(str, pt_line(x, 'A', 'B', 'C'));
	return (str);
}

char	*rush04(int x, int y)
{
	char *str;

	str = (char*)malloc(sizeof(char) * (x * y + 1));
	if ((x < 1) || (y < 1) || (x < 1 && y < 1))
		return (str);
	ft_strcat(str, pt_line(x, 'A', 'B', 'C'));
	while (--y > 1)
		ft_strcat(str, pt_line(x, 'B', ' ', 'B'));
	if (y == 1)
		ft_strcat(str, pt_line(x, 'C', 'B', 'A'));
	return (str);
}
