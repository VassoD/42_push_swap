/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 19:24:13 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 20:22:43 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALGORITHM_H
# define ALGORITHM_H
# include "../operations/operations.h"

void	send_to_b(t_stack **chunks);
void	send_to_a2(t_stack **chunks);
int		send_one_chunk(t_stack *chunk);
void	send_to_a(t_stack **chunks);
int		send_one_chunk2(t_stack *chunk);
void	send_to_b2(t_stack **chunks);
void	split_a_in_half(void);

#endif
