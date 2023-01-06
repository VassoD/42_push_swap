/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send_to_b2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:31 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:24:32 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./algorithm.h"

void	send_to_b2(t_stack **chunks)
{
	if ((*chunks)->num == 1)
	{
		op(PB);
		push(chunks, NULL);
	}
	else if ((*chunks)->num == 2)
	{
		if (op(GET)[a]->num < op(GET)[a]->next->num)
			op(SA);
		op(PB);
		op(PB);
		push(chunks, NULL);
	}
	else
		(*chunks)->num -= send_one_chunk2(*chunks);
}
