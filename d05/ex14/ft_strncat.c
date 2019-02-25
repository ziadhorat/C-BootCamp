/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 06:14:20 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/19 06:20:36 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i_dest;
	int i_src;

	i_dest = 0;
	i_src = 0;
	while (dest[i_dest] != '\0')
		i_dest++;
	while (src[i_src] != '\0' && nb >= 1)
	{
		dest[i_dest] = src[i_src];
		i_dest++;
		i_src++;
		nb--;
	}
	dest[i_dest] = '\0';
	return (dest);
}
