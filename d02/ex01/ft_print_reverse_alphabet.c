/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/13 08:56:18 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/13 13:11:46 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_alphabet(void)
{
	char rev_let;

	rev_let = 'z';
	while (rev_let <= 'a')
	{
		ft_putchar(rev_let);
		rev_let--;
	}
}
