/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/20 07:00:33 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/20 09:10:21 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <errno.h>

int		ft_strlen2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;

	len = ft_strlen2(src);
	ret = (char*)malloc(sizeof(*ret) * (len + 1));
	if (!ret)
	{
		errno = ENOMEM;
		return (0);
	}
	ret[len + 1] = '\0';
	while (len-- > 0)
		ret[len] = src[len];
	return (ret);
}
