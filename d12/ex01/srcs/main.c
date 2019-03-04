/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 07:28:15 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/27 17:14:08 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/errno.h>
#include <fcntl.h>
#define BUF_SIZE 27500

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		disp_file(char *str, int ac)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(str, O_RDONLY);
	if (ac == 1)
		fd = 0;
	if (fd == 3)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		close(fd);
		return (1);
	}
	return (0);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	(void)**av;
	if (ac >= 1)
	{
		while (av[i] != '\0')
		{
			disp_file(av[i], ac);
			i++;
		}
	}
	return (0);
}
