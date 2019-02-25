/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 08:08:56 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/19 08:16:26 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int cur_arg;
	int cur_vec;

	cur_arg = 1;
	while (cur_arg < argc)
	{
		cur_vec = 0;
		while (argv[cur_arg][cur_vec] != '\0')
		{
			ft_putchar(argv[cur_arg][cur_vec]);
			cur_vec++;
		}
		cur_arg++;
		ft_putchar('\n');
	}
	return (0);
}
