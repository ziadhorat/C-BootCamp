/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 06:43:02 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/18 18:15:36 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int total;
	int current;

	if (nb == 0)
		return (1);
	if (nb > 0)
	{
		total = 1;
		current = 1;
		while (current <= nb)
		{
			total *= current;
			current++;
		}
		return (total);
	}
	else
		return (0);
}
