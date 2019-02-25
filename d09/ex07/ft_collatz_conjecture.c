/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 22:27:49 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/21 23:02:45 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	g_flight = 0;

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	g_flight++;
	if (base == 1)
		return (g_flight);
	if (base % 2 == 0)
		return (ft_collatz_conjecture(base / 2));
	else
		return (ft_collatz_conjecture((base * 3) + 1));
}
