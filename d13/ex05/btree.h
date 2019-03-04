/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 07:26:33 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/28 07:28:22 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

typedef struct s_btree
{
	struct	s_btree *left;
	struct	s_btree *right;
	void	*item;
}				t_btree;

#endif
