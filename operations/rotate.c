/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:49:16 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 14:49:33 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./operations.h"

int	rotate(t_stack **head)
{
	t_stack	*tmp;

	tmp = *head;
	get_last_node(*head, -1)->next = *head;
	*head = (*head)->next;
	tmp->next = NULL;
	return (1);
}
