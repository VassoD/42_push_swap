/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_to_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:36:14 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 15:41:30 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./handle_data.h"

int	*stack_to_array(t_stack *head, int len)
{
	int		*ret;
	int		i;
	t_stack	*ptr;

	ret = malloc(sizeof(int) * len);
	if (!ret)
		clean_exit();
	ptr = head;
	i = 0;
	while (ptr && i < len)
	{
		ret[i] = ptr->num;
		i++;
		ptr = ptr->next;
	}
	return (ret);
}
