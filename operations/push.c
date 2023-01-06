/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:48:04 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 15:51:41 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./operations.h"

int	push(t_stack **src, t_stack **dst)
{
	t_stack	*tmp;

	tmp = *src;
	if (!dst)
	{
		*src = (*src)->next;
		free(tmp);
	}
	else
	{
		tmp = *src;
		*src = (*src)->next;
		link_node(tmp, dst);
	}
	return (1);
}
