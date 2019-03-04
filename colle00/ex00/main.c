/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmrewa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 13:43:10 by cmrewa            #+#    #+#             */
/*   Updated: 2019/03/02 14:42:28 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		rush(int x, int y);

int ft_atoi(char *str)
{
  int neg;
  int i;
  int num;

  i = 0;
  neg = 1;
  num = 0;
  while (str[i] <= ' ')
    i++;
  if (str[i] == '-' || str[i] == '+')
  {
    if (str[i] == '-')
      neg *= -1;
    i++;
  }
  while (str[i] >= '0' && str[i] <= '9')
  {
    num = num * 10 + (str[i] - 48);
    i++;
  }
  return (num * neg);
}

int		main(int ac, char **av)
{
	rush(ft_atoi(av[1]), ft_atoi(av[2]));
	return (0);
}
