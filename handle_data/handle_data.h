/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_data.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 16:24:28 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 16:24:33 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANDLE_DATA_H
# define HANDLE_DATA_H

# include "../includes.h"

t_stack		*create_node(int num);
void		link_node(t_stack *node, t_stack **ptr_head);
t_stack		*get_last_node(t_stack *head, int depth);
int			stack_is_sorted(t_stack *head, int len);
int			*stack_to_array(t_stack *head, int len);
void		sort_array(int *array, int len);
int			stack_len(t_stack *head);
void		handle_number(t_stack_target stack, t_handle_number settings);

#endif
