/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 10:08:52 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/15 17:15:35 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int i;
	int b;
	int cur;

	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	cur = nb;
	while (1)
	{
		i = 2;
		b = 0;
		while (i <= 5)
		{
			if ((cur % i) == 0)
				b = 1;
			i++;
		}
		if (cur == 2 || cur == 3 || cur == 5)
			b = 0;
		if (b == 0)
			return (cur);
		cur++;
	}
	return (0);
}
