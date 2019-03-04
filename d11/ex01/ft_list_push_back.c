/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 07:00:40 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/27 13:53:51 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *current;

	current = *begin_list;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = (t_list*)malloc(sizeof(t_list));
	current->next->data = data;
	current->next->next = NULL;
}
