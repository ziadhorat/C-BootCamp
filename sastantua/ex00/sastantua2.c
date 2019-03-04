/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 14:47:33 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/17 16:13:01 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	bottom(int x, int y)
{
	int i;
	int j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			ft_putchar('.');
			j++;
		}
		ft_putchar('\n');
		i++;
	}

}

int		floor_len(int size)
{
	if (size == 0)
		return (7);
	return (floor_len((size - 1) + 2 * (1 + (3 + size) + ((size % 2) + (size / 2)))));
}

void	sastantua(int size)
{
	int line;
	int x;
	int y;

	line = 0;
	while (line < size)
	{
		y = 3 + line;
		x = floor_len(line);
		bottom(x, y);
		ft_putchar('\n');	
		line++;
	}
}

int main(void)
{
	sastantua(3);
}
