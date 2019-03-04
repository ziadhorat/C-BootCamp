/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 06:51:08 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/24 16:12:40 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar(char c);
char	ft_itoa(int i);
int		fill_sud(int sud[][9], int r, int c);

int		avail(int sud[][9], int r, int c, int n)
{
	int		rs;
	int		cs;
	int		i;

	i = -1;
	rs = (r / 3) * 3;
	cs = (c / 3) * 3;
	while (++i < 9)
	{
		if (sud[r][i] == n || sud[i][c] == n)
			return (0);
		if (sud[rs + (i % 3)][cs + (i / 3)] == n)
			return (0);
	}
	return (1);
}

int		fill_sud2(int sud[][9], int r, int c)
{
	if ((c + 1) < 9)
		return (fill_sud(sud, r, c + 1));
	else if ((r + 1) < 9)
		return (fill_sud(sud, r + 1, 0));
	else
		return (1);
}

int		fill_sud3(int sud[][9], int r, int c)
{
	int i;

	i = -1;
	while (++i < 9)
		if (avail(sud, r, c, i + 1))
		{
			sud[r][c] = i + 1;
			if ((c + 1) < 9)
			{
				if (fill_sud(sud, r, c + 1))
					return (1);
				else
					sud[r][c] = 0;
			}
			else if ((r + 1) < 9)
			{
				if (fill_sud(sud, r + 1, 0))
					return (1);
				else
					sud[r][c] = 0;
			}
			else
				return (1);
		}
	return (0);
}

int		fill_sud(int sud[][9], int r, int c)
{
	if (r < 9 && c < 9)
	{
		if (sud[r][c] != 0)
			return (fill_sud2(sud, r, c));
		else
			return (fill_sud3(sud, r, c));
		return (0);
	}
	else
		return (1);
}

int		sud_main(int sud[9][9])
{
	int		i;
	int		j;

	if (fill_sud(sud, 0, 0))
	{
		i = -1;
		while (++i < 9)
		{
			j = -1;
			while (++j < 9)
			{
				ft_putchar(ft_itoa(sud[i][j]));
				if (j < 8)
					ft_putchar(' ');
			}
			ft_putchar('\n');
		}
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
