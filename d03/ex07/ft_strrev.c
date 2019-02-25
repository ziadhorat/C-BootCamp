/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 08:48:18 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/15 17:03:32 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strrev(char *str)
{
	int end;
	int start;
	char a;

	start = 0;
	int i=0;
	end = ft_strlen(str);
	while (start != end)
	{
		a = str[start];
		str[start] = str[end];
		str[end] = a;
		end--;
		start++;i++;
	}
	return (str);
}
