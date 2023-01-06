/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_a2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:26 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:27:39 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./algorithm.h"

static int	get_eval(int eval_mid)
{
	if (eval_mid > 18)
		return (18);
	return (eval_mid);
}

void	send_to_a2(t_stack **chunks)
{
	int	len;
	int	*arr;
	int	mid;
	int	count_pa;
	int	eval_mid;

	count_pa = 0;
	len = stack_len(op(GET)[b]);
	arr = stack_to_array(op(GET)[b], len);
	eval_mid = get_eval(len / 2);
	sort_array(arr, len);
	mid = arr[eval_mid];
	link_node(create_node(eval_mid), chunks);
	while (count_pa < eval_mid)
	{
		if (op(GET)[b]->num < mid)
		{
			op(PA);
			count_pa++;
		}
		else
			op(RB);
	}
	free(arr);
}
