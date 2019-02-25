/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 11:19:20 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/14 06:24:25 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb2(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 99)
	{
		second = first + 1;
		while (second <= 99)
		{
			if (first != second)
			{
				ft_putchar((first / 10) + 48);
				ft_putchar((first % 10) + 48);
				ft_putchar(' ');
				ft_putchar((second / 10) + 48);
				ft_putchar((second % 10) + 48);
				ft_putchar(',');
				ft_putchar(' ');
				second++;
			}
		}
		first++;
	}
}
