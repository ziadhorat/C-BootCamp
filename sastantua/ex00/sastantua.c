/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:23:26 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/17 08:41:49 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	start_line(int i, int num)
{
	while (i-- > 1)
		ft_putchar(' ');
	ft_putchar('/');
	while (num-- >= 1)
		ft_putchar('*');
	ft_putchar('\\');
}

void	draw(int i, int size)
{
	int i_step;
	int i_size;
	int line_num;
	int value;
	int i_num_of_line;

	i_step = 4;
	i_size = 1;
	value = 1;
	while (i_size++ <= size)
	{
		line_num = 1;
		i_num_of_line = i_size + 2;
		while (line_num++ < i_num_of_line)
		{
			value += 2;
			i -= 1;
			start_line(i, value - 2);
			ft_putchar('\n');
		}
		value += i_step;
		i -= 2;
		if (i_size % 2 == 1)
			i_step += 2;
	}
}

int		get_cent(int val, int step)
{
	return (((val - step) - 1) / 2) - 1;
}

void	sastantua(int size)
{
	int i_step;
	int i_size;
	int line_num;
	int i_num_of_line;
	int value;

	i_step = 4;
	i_size = 1;
	value = 1;
	while (i_size <= size)
	{
		i_size++;
		line_num = 1;
		i_num_of_line = i_size + 2;
		while (line_num++ < i_num_of_line)
			value += 2;
		value += i_step;
		if (i_size % 2 == 1)
			i_step += 2;
	}
	draw(get_cent(value, i_step), size);
}
