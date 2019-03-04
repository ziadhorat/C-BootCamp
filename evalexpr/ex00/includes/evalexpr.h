/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   evalexpr.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 06:39:56 by zmahomed          #+#    #+#             */
/*   Updated: 2019/03/01 07:06:51 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVALEXPR_H
# define EVALEXPR_H

void	ft_putchar(char c);
void	ft_putnbr(int n);
int		ft_atoi(char **str);
int		eval_expr(char *expr);
int		main_expr_handle(char **expr);
int		final_op(char **expr);
int		print(char **expr);

#endif
