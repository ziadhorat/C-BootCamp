/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/01 06:09:40 by zmahomed          #+#    #+#             */
/*   Updated: 2019/03/02 07:21:54 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/evalexpr.h"
/*
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
*/
int		do_op(char **expr)
{
	int		i;
	int		i2;
	char	op;

	i = print(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '/' && op != '*' && op != '%')
			return (i);
		(*expr)++;
		i2 = print(expr);
		if (op == '/')
			i = i / i2;
		else if (op == '*')
			i = i * i2;
		else
			i = i % i2;
	}
	return (i);
}

int		main_expr_handle(char **expr)
{
	int		i;
	int		i2;
	char	op;

	i = do_op(expr);
	while (**expr)
	{
		while (**expr == ' ')
			(*expr)++;
		op = **expr;
		if (op != '+' && op != '-')
			return (i);
		(*expr)++;
		i2 = do_op(expr);
		if (op == '+')
			i = i + i2;
		else
			i = i - i2;
	}
	return (i);
}

int		eval_expr(char *expr)
{
	int ans;

	ans = main_expr_handle(&expr);
	return (ans);
}
