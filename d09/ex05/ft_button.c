/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 20:11:32 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/21 20:22:22 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if (j < i && i < k)
		return (i);
	if (k < i && i < j)
		return (i);
	if (i < k && k < j)
		return (k);
	if (j < k && k < i)
		return (k);
	if (i < j && j < k)
		return (j);
	return (j);
}
