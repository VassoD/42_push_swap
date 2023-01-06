/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:33:45 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 14:34:50 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./handle_data.h"

t_stack	*create_node(int num)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		clean_exit();
	node->num = num;
	node->next = NULL;
	return (node);
}

void	link_node(t_stack *node, t_stack **ptr_head)
{
	if (!*ptr_head)
	{
		node->next = NULL;
		*ptr_head = node;
	}
	else
	{
		node->next = *ptr_head;
		*ptr_head = node;
	}
}

t_stack	*get_last_node(t_stack *head, int depth)
{
	t_stack	*ptr;
	int		i;

	i = 0;
	if (head == NULL)
		return (NULL);
	ptr = head;
	while (ptr->next)
	{
		if (depth != -1 && i == depth)
			break ;
		ptr = ptr->next;
		i++;
	}
	return (ptr);
}
