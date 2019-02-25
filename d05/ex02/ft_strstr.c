/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 10:25:21 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/18 10:51:12 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i_str;
	int i_search;
	int i_cur;

	i_cur = 0;
	i_str = 0;
	if (str[i_str] == '\0')
		return (to_find);
	while (str[i_str] != '\0')
	{
		if (i_cur == 0)
			i_search = 0;
		if (str[i_str] == to_find[i_search])
		{
			if (to_find[i_search + 1] == '\0')
				return (&str[i_str - 1]);
			i_search++;
			i_cur = 1;
		}
		else
			i_cur = 0;
		i_str++;
	}
	return (0);
}
