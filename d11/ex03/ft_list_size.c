/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 13:57:59 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/27 14:01:47 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*current;
	int		i;

	i = 0;
	current = begin_list;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
