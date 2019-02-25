/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zmahomed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:46:14 by zmahomed          #+#    #+#             */
/*   Updated: 2019/02/21 17:54:26 by zmahomed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int hour_my;

	if (hour == 0)
		hour_my = 12;
	else if (hour > 12)
		hour_my = hour % 12;
	else
		hour_my = hour;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 24)
		printf("12.00 A.M. AND 1.00 AM.");
	else if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.");
	else if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.", hour_my, (hour_my + 1) % 12);
	else
		printf("%d.00 P.M. AND %d.00 P.M.", hour_my, (hour_my + 1) % 12);
	printf("\n");
}
