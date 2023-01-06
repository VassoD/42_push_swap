/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_len.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:25:01 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:25:05 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./handle_data.h"

int	stack_len(t_stack *head)
{
	t_stack	*ptr;
	int		len;

	len = 0;
	ptr = head;
	if (!ptr)
		return (0);
	while (ptr)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}
