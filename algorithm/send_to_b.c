/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:29 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 20:34:04 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./algorithm.h"

static int	get_eval(int eval_mid)
{
	if (eval_mid > 18)
		return (18);
	return (eval_mid);
}

void	send_to_b(t_stack **chunks)
{
	int	len;
	int	*arr;
	int	mid;
	int	count_pb;
	int	eval_mid;

	count_pb = 0;
	len = stack_len(op(GET)[a]);
	arr = stack_to_array(op(GET)[a], len);
	eval_mid = get_eval(len / 2);
	sort_array(arr, len);
	mid = arr[eval_mid];
	link_node(create_node(eval_mid), chunks);
	while (count_pb < eval_mid)
	{
		if (op(GET)[a]->num < mid)
		{
			op(PB);
			count_pb++;
		}
		else
			op(RA);
	}
	free(arr);
}
