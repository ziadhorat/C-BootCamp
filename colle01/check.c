/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/24 11:20:38 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/24 16:13:31 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_dup(char c, char **str, int row)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < 9 && c != '.')
	{
		if (str[row][i] == c)
			count++;
		i++;
	}
	if (count > 1)
		return (1);
	return (0);
}

int		check_dup_col(char c, char **str, int column)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (i < 9 && c != '.')
	{
		if (str[i][column] == c)
			count++;
		i++;
	}
	if (count > 1)
		return (1);
	return (0);
}
