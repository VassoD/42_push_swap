/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   includes.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:30 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/02 19:27:13 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCLUDES_H
# define INCLUDES_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
// for comparison
# define LESS 0
# define GREATER 1
// for operations action
# define REVERSE 2
# define MATCH 1
# define CANONICAL 0
// for length
# define MAX_MOVE 1
# define TOTAL 0
// for operation cost
# define LEFT 0
# define RIGHT 1

typedef enum e_stacks
{
	a,
	b
}	t_stack_target;

typedef struct s_stack
{
	int				num;
	struct s_stack	*next;
}	t_stack;

typedef enum operations
{
	GET,
	GET_A,
	GET_B,
	SA,
	SB,
	SS,
	PA,
	PB,
	RA,
	RB,
	RR,
	RRA,
	RRB,
	RRR
}	t_operation;

typedef struct s_send_number
{
	t_operation	action[3];
	t_stack		*chunks;
	int			comparison;
	int			mid;
}	t_handle_number;

void	clean_exit(void);

#endif
