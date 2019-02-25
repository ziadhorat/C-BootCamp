/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcaat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 06:21:23 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/19 06:37:39 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i_dest;
	int i_src;
	unsigned int len;

	i_dest = 0;
	i_src = 0;
	len = 0;
	while (dest[i_dest] != '\0')
	{
		i_dest++;
		len++;
	}
	while (src[i_src] != '\0' && size >= 1)
	{
		dest[i_dest] = src[i_src];
		i_src++;
		i_dest++;
		size--;
		len++;
	}
	if (i_src != 0)
		dest[i_dest] = '\0';
	return (len);
}
