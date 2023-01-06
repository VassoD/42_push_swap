/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:49:37 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 14:49:55 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./operations.h"

int	swap(t_stack **head)
{
	t_stack	*tmp;

	if (!*head || !(*head)->next)
		return (0);
	tmp = (*head)->next;
	(*head)->next = (*head)->next->next;
	tmp->next = *head;
	*head = tmp;
	return (1);
}
