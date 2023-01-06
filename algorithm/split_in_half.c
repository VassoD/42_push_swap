/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_in_half.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:34 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:24:35 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./algorithm.h"

void	split_a_in_half(void)
{
	t_handle_number	settings;
	int				*arr;
	int				mid;
	int				length[2];

	length[TOTAL] = stack_len(op(GET)[a]);
	length[MAX_MOVE] = (length[TOTAL] / 2) - 1;
	arr = stack_to_array(op(GET)[a], length[TOTAL]);
	sort_array(arr, length[TOTAL]);
	mid = arr[(length[TOTAL] / 2) - 1];
	settings.action[MATCH] = PB;
	settings.action[CANONICAL] = RA;
	settings.action[REVERSE] = RRA;
	settings.comparison = LESS;
	settings.chunks = NULL;
	settings.mid = mid;
	while (length[MAX_MOVE]-- > 0)
		handle_number(a, settings);
	free(arr);
}
