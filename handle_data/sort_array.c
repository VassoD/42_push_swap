/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_array.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:35:00 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 14:35:16 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./handle_data.h"

void	sort_array(int *array, int len)
{
	int	i;
	int	y;
	int	tmp;

	tmp = 0;
	i = 0;
	while (i < len - 1)
	{
		y = 0;
		while (y < len - i - 1)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
			}
			y++;
		}
		i++;
	}
}
