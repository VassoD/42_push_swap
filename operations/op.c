/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:37:10 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/03 19:50:59 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./operations.h"

static char	*get_ops(int index)
{
	static char		*operations[] = {
		"",
		"",
		"",
		"sa",
		"sb",
		"ss",
		"pa",
		"pb",
		"ra",
		"rb",
		"rr",
		"rra",
		"rrb",
		"rrr"};

	return (operations[index]);
}

static	t_stack	**op2(t_operation token, t_stack **e_stacks)
{
	int	i;

	i = 0;
	if (token == RR)
	{
		rotate(&e_stacks[a]);
		rotate(&e_stacks[b]);
	}
	if (token == SS)
	{
		swap(&e_stacks[a]);
		swap(&e_stacks[b]);
	}
	if (token == RRR)
	{
		reverse_rotate(&e_stacks[a]);
		reverse_rotate(&e_stacks[b]);
	}
	while (get_ops(token)[i])
		i++;
	write(1, get_ops(token), i);
	write(1, "\n", 1);
	return ((t_stack **)1);
}

void	free_list(t_stack **head)
{
	t_stack	*ptr;

	if (!*head)
		return ;
	while (*head)
	{
		ptr = *head;
		(*head) = (*head)->next;
		free(ptr);
	}
	free(*head);
}

static	t_stack	**op3(t_operation token, t_stack **e_stacks)
{
	if (token == SA)
		swap(&e_stacks[a]);
	if (token == SB)
		swap(&e_stacks[b]);
	if (token == PA)
		push(&e_stacks[b], &e_stacks[a]);
	if (token == PB)
		push(&e_stacks[a], &e_stacks[b]);
	if (token == RA)
		rotate(&e_stacks[a]);
	if (token == RB)
		rotate(&e_stacks[b]);
	if (token == RRA)
		reverse_rotate(&e_stacks[a]);
	if (token == RRB)
		reverse_rotate(&e_stacks[b]);
	if (token == GET)
		return (e_stacks);
	return (op2(token, e_stacks));
}

t_stack	**op(t_operation token)
{
	static t_stack	*e_stacks[2];

	if ((int)token == -200)
	{
		free_list(&e_stacks[0]);
		free_list(&e_stacks[1]);
		return (NULL);
	}
	return (op3(token, e_stacks));
}
