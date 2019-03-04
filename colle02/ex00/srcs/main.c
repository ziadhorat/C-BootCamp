/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:56:17 by zmahomed          #+#    #+#             */
/*   Updated: 2019/03/03 17:10:29 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/rush2.h"

/*
** READS THE INPUT FROM THE PIPE			FD=0 FOR READING FROM PIPE
** RETURNS THE RUSH FROM THE PIPE
*/

char	*read_input(int *row, int *col, char *str)
{
	char	buf;
	int		i;
	int		c;

	c = 0;
	i = 0;
	str = (char*)malloc(sizeof(char) * 99999999999999);
	while (read(0, &buf, 1))
	{
		*col = c;
		if (buf == '\n')
		{
			c = 0;
			(*row)++;
		}
		else
			c++;
		str[i] = buf;
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** USES STRING COMPARE TO CHECK THE INPUT AGAINST ALL THE RUSHES
** PRINTS THE NAME OF THE RUSH IF ITS A MATCH
*/

void	find_rush(char *str, int r, int c)
{
	int disp;

	disp = 0;
	if (r != 0 || c != 0)
	{
		if (ft_strcmp(str, rush00(c, r)) == 0)
			print_format(r, c, ++disp, 0);
		if (ft_strcmp(str, rush01(c, r)) == 0)
			print_format(r, c, ++disp, 1);
		if (ft_strcmp(str, rush02(c, r)) == 0)
			print_format(r, c, ++disp, 2);
		if (ft_strcmp(str, rush03(c, r)) == 0)
			print_format(r, c, ++disp, 3);
		if (ft_strcmp(str, rush04(c, r)) == 0)
			print_format(r, c, ++disp, 4);
		if (disp == 0)
			ft_putstr("aucune");
	}
	if (disp == 0)
		ft_putstr("aucune");
}

/*
** MAIN FUNCTION		READ_INPUT TO READ FROM THE PIPE
** FIND_RUSH TO CHECK IF ITS A MATCH
*/

int		main(void)
{
	int		r;
	int		c;
	char	*str;

	r = 0;
	c = 0;
	str = NULL;
	str = read_input(&r, &c, str);
	if ((r * c) <= 999999999)
	{
		find_rush(str, r, c);
	}
	else
		ft_putstr("aucune");
	ft_putchar('\n');
	free(str);
	return (0);
}
