/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_number.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:16 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:24:17 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./algorithm.h"

void	handle_number(t_stack_target stack, t_handle_number settings)
{
	int	count_no_match;

	count_no_match = 0;
	while ((settings.comparison == GREATER
			&& !(op(GET)[stack]->num > settings.mid))
			|| (settings.comparison == LESS
			&& !(op(GET)[stack]->num < settings.mid)))
	{
		op(settings.action[CANONICAL]);
		count_no_match++;
	}
	op(settings.action[MATCH]);
}
