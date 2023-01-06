/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:38:21 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 14:47:59 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OPERATIONS_H
# define OPERATIONS_H

# include "../includes.h"
# include "../handle_data/handle_data.h"

t_stack	**op(t_operation token);
int		push(t_stack **src, t_stack **dst);
int		swap(t_stack **head);
int		rotate(t_stack **head);
int		reverse_rotate(t_stack **head);
void	free_list(t_stack **head);

#endif
