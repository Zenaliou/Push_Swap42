/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 10:24:10 by marvin            #+#    #+#             */
/*   Updated: 2025/03/19 10:24:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_stack **a)
{
	if ((*a)->value > (*a)->next->value)
		sa(a);
	if ((*a)->next->value > (*a)->next->next->value)
	{
		rra(a);
		if ((*a)->value > (*a)->next->value)
			sa(a);
	}
}

void	sort_small(t_stack **a, t_stack **b)
{
	int	min_pos;

	while (stack_size(*a) > 3)
	{
		min_pos = find_min_pos(*a);
		move_min_to_top(a, min_pos);
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}

void	move_min_to_top(t_stack **a, int pos)
{
	int	size;

	size = stack_size(*a);
	if (pos <= size / 2)
		while (pos-- > 0)
			ra(a);
	else
		while (pos++ < size)
			rra(a);
}

int	find_min_pos(t_stack *a)
{
	int	min;
	int	pos;
	int	i;

	min = a->value;
	pos = 0;
	i = 0;
	while (a)
	{
		if (a->value < min)
		{
			min = a->value;
			pos = i;
		}
		a = a->next;
		i++;
	}
	return (pos);
}
