/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 08:22:30 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/19 08:29:30 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int cur_vec;

	while (--argc >= 1)
	{
		cur_vec = 0;
		while (argv[argc][cur_vec] != '\0')
		{
			ft_putchar(argv[argc][cur_vec]);
			cur_vec++;
		}
		ft_putchar('\n');
	}
	return (0);
}
