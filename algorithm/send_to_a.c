/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:24 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:24:25 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./algorithm.h"

void	send_to_a(t_stack **chunks)
{
	if ((*chunks)->num == 1)
	{
		op(PA);
		push(chunks, NULL);
	}
	else if ((*chunks)->num == 2)
	{
		if (op(GET)[b]->num < op(GET)[b]->next->num)
			op(SB);
		op(PA);
		op(PA);
		push(chunks, NULL);
	}
	else
		(*chunks)->num -= send_one_chunk(*chunks);
}
