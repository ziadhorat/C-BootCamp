/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/23 11:53:42 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/24 16:17:41 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"
#include <stdio.h>

int		ft_atoi(char c);
int		sud_main(int sud[9][9]);
int		check_dup(char c, char **str, int row);
int		check_dup_col(char c, char **str, int column);

int		checkerror(int c, char **sud)
{
	int r;

	r = 0;
	if (c != 10)
		return (1);
	c--;
	while (c > 0)
	{
		r = 0;
		while (sud[c][r] != '\0')
		{
			if (!(sud[c][r] == 46 || (sud[c][r] > 47 && sud[c][r] < 58)))
				return (1);
			if (r > 8 || check_dup(sud[c][r], sud, r) > 1)
				return (1);
			if (check_dup_col(sud[c][r], sud, r) > 1)
				return (1);
			r++;
		}
		if (r < 9)
			return (1);
		c--;
	}
	return (0);
}

void	make_int(int sud[9][9], char **sudoku)
{
	int		i;
	int		j;

	i = -1;
	while (++i < 9)
	{
		j = -1;
		while (++j < 9)
		{
			sud[i][j] = ft_atoi(sudoku[i + 1][j]);
		}
	}
}

void	begin_solve(char **sudoku)
{
	int		sud[9][9];

	make_int(sud, sudoku);
	sud_main(sud);
}

int		main(int argc, char **argv)
{
	if (checkerror(argc, argv) == 0)
	{
		begin_solve(argv);
	}
	else
	{
		write(1, "Error\n", 6);
	}
	return (0);
}
