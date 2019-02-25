/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/18 10:12:22 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/19 12:46:29 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n & src[i] != '\0')
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
		}
		else
			dest[i] = '\0';
		i++;
	}
	if (n < i)
		while (dest[i + 1] != '\0')
			dest[i] = '\0';
	return (dest);
}
