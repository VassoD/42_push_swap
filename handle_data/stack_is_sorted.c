/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:35:27 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 20:18:47 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./handle_data.h"

int	stack_is_sorted(t_stack *head, int len)
{
	int	*arr;
	int	i;
	int	y;
	int	ret;

	arr = stack_to_array(head, len);
	i = 0;
	ret = 1;
	while (i < len - 1)
	{
		y = 0;
		while (y < len - i - 1)
		{
			if (arr[y] > arr[y + 1])
			{
				ret = 0;
				break ;
			}
			y++;
		}
		i++;
	}
	free(arr);
	return (ret);
}
