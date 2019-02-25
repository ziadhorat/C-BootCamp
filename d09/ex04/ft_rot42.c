/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 19:02:41 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/21 21:02:33 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_rot(int up_low, int cur)
{
	if (up_low == 1)
	{
		cur -= 23;
		while (cur > 26)
			cur -= 26;
		cur += 65;
	}
	if (up_low == 2)
	{
		cur -= 55;
		while (cur > 26)
			cur -= 26;
		cur += 97;
	}
	return (cur);
}

char	*ft_rot42(char *str)
{
	int cur;
	int i;
	int num;

	i = 0;
	while (str[i] != '\0')
	{
		cur = str[i];
		num = 42;
		if (str[i] == 'K')
			cur = 'A';
		else if (str[i] == 'k')
			cur = 'a';
		else if (str[i] >= 'A' && str[i] <= 'Z')
			cur = ft_rot(1, cur);
		else if (str[i] >= 'a' && str[i] <= 'z')
			cur = ft_rot(2, cur);
		str[i] = cur;
		i++;
	}
	return (str);
}
