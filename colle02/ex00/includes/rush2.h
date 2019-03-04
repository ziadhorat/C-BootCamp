/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush2.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 14:57:17 by zmahomed          #+#    #+#             */
/*   Updated: 2019/03/03 08:53:45 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH2_H
# define RUSH2_H
# include <fcntl.h>
# include <sys/stat.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

char	*read_input(int *row, int *col, char *str);
void	print_format(int r, int c, int num, int rush);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);

char	*pt_line(int width, char corn, char fill, char corn2);
char	*ft_strcat(char *dest, char *src);
char	*rush00(int x, int y);
char	*rush01(int x, int y);
char	*rush02(int x, int y);
char	*rush03(int x, int y);
char	*rush04(int x, int y);

#endif
