/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:48:41 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 14:49:08 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./operations.h"

int	reverse_rotate(t_stack **head)
{
	t_stack	*tmp;
	t_stack	*last_node;

	if (*head == NULL)
		return (0);
	tmp = *head;
	last_node = get_last_node(*head, -1);
	while (tmp)
	{
		if (tmp->next == last_node)
		{
			tmp->next = NULL;
			last_node->next = *head;
			*head = last_node;
			return (1);
		}
		tmp = tmp->next;
	}
	return (0);
}
