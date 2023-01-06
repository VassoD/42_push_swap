/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_one_chunk.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:18 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:24:19 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./algorithm.h"
#define INDEX 0
#define MID 1

static int	send_number(int indexes[2],
	int *arr, int *count_rb, t_stack *chunk)
{
	op(PA);
	while (*count_rb)
	{
		op(RRB);
		if (op(GET)[b]->num > indexes[MID]
		&&arr[chunk->num - (indexes[INDEX] + 1) - 1] == op(GET)[b]->num)
		{
			op(PA);
			indexes[INDEX]++;
		}
		*count_rb = *count_rb - 1;
	}
	return (indexes[INDEX] + 1);
}

int	send_one_chunk(t_stack *chunk)
{
	int	*arr;
	int	indexes[2];
	int	count_rb;
	int	max;

	indexes[INDEX] = 0;
	count_rb = 0;
	arr = stack_to_array(op(GET)[b], chunk->num);
	sort_array(arr, chunk->num);
	indexes[MID] = arr[chunk->num / 2];
	max = (chunk->num / 2) - (chunk->num % 2 == 0);
	while (indexes[INDEX] < max)
	{
		if (op(GET)[b]->num > indexes[MID]
				&& arr[chunk->num - indexes[INDEX] - 1] == op(GET)[b]->num)
			indexes[INDEX] = send_number(indexes, arr, &count_rb, chunk);
		else
		{
			op(RB);
			count_rb++;
		}
	}
	free(arr);
	return (max);
}
