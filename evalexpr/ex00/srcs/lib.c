/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 06:34:05 by zmahomed          #+#    #+#             */
/*   Updated: 2019/03/01 07:08:57 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "../includes/evalexpr.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char **str)
{
	int		nbr;

	nbr = 0;
	while (**str >= '0' && **str <= '9')
	{
		nbr = nbr * 10 + (**str - '0');
		(*str)++;
	}
	return (nbr);
}

void    ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((n % 10) + '0');
}

int		print(char **expr)
{
	int i;

	while (**expr == ' ')
		(*expr)++;
	if (**expr == '(')
	{
		(*expr)++;
		i = main_expr_handle(expr);
		if (**expr == ')')
			(*expr)++;
		return (i);
	}
	return (ft_atoi(expr));
}
