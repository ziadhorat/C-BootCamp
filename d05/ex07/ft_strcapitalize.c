/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 16:28:37 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/18 17:15:56 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int next;

	i = 0;
	next = 1;
	while (str[i] != '\0')
	{
		if ((next == 1) && (str[i] >= 'a') && (str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			next = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			next = 0;
		else if (str[i] >= 'a' && str[i] <= 'z')
			next = 0;
		else if (str[i] >= '0' && str[i] <= '9')
			next = 0;
		else
			next = 1;
		i++;
	}
	return (str);
}
