/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdoropou <vdoropou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 22:34:19 by vdoropou          #+#    #+#             */
/*   Updated: 2023/01/03 19:50:40 by vdoropou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	init(void)
{
	t_stack	*chunks;

	chunks = NULL;
	split_a_in_half();
	while (!stack_is_sorted(op(GET)[a], stack_len(op(GET)[a]))
		&& !(stack_len(op(GET)[a]) == 2))
		send_to_b(&chunks);
	if (op(GET)[a] && op(GET)[a]->num > op(GET)[a]->next->num)
		op(SA);
	while (chunks && stack_len(chunks))
		send_to_a(&chunks);
	while (!stack_is_sorted(op(GET)[b], stack_len(op(GET)[b]))
		&& !(stack_len(op(GET)[b]) == 2))
		send_to_a2(&chunks);
	while (chunks && stack_len(chunks))
		send_to_b2(&chunks);
	while (op(GET)[b])
	{	
		op(RRB);
		op(PA);
		if (!(op(GET)[a]->num < op(GET)[a]->next->num))
			op(SA);
	}
	free_list(&chunks);
}

void	sort_three(void)
{
	if (op(GET)[a]->num > op(GET)[a]->next->num
	&& get_last_node(op(GET)[a], -1)->num > op(GET)[a]->num)
		op(SA);
	else if (op(GET)[a]->num > op(GET)[a]->next->num
	&& op(GET)[a]->next->num > get_last_node(op(GET)[a], -1)->num)
	{
		op(SA);
		op(RRA);
	}
	else if (op(GET)[a]->num > op(GET)[a]->next->num
	&& op(GET)[a]->num > get_last_node(op(GET)[a], -1)->num)
		op(RA);
	else if (op(GET)[a]->num < op(GET)[a]->next->num
	&& op(GET)[a]->num < get_last_node(op(GET)[a], -1)->num)
	{
		op(SA);
		op(RA);
	}
	else if (op(GET)[a]->num < op(GET)[a]->next->num
	&& op(GET)[a]->num > get_last_node(op(GET)[a], -1)->num)
		op(RRA);
}

void	sort_five(void)
{
	op(PB);
	op(PB);
	sort_three();
	op(PA);
	if (op(GET)[a]->num > op(GET)[b]->num)
		op(RA);
	op(PA);
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	if (argc < 3)
		return (0);
	if (has_duplicates(argc, argv) || !all_numeric(argc, argv) || !(argc > 2))
	{
		write(1, "Error\n", 6);
		clean_exit();
	}
	while (--i > 0)
		link_node(create_node(atoi(argv[i])), &op(GET)[a]);
	if (stack_is_sorted(op(GET)[a], stack_len(op(GET)[a])))
		clean_exit();
	if (stack_len(op(GET)[a]) == 3)
		sort_three();
	if (stack_len(op(GET)[a]) == 5)
		sort_five();
	else
		init();
	clean_exit();
	return (0);
}
