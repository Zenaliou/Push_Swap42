/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:24:09 by marvin            #+#    #+#             */
/*   Updated: 2025/03/18 09:24:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack **a)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*a || !(*a)->next)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = NULL;
	last = *a;
	while (last->next)
		last = last->next;
	last->next = tmp;
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!*b || !(*b)->next)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = NULL;
	last = *b;
	while (last->next)
		last = last->next;
	last->next = tmp;
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a);
	rb(b);
	ft_printf("rr\n");
}

void	rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*a || !(*a)->next)
		return ;
	last = *a;
	before_last = NULL;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *a;
	*a = last;
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*b || !(*b)->next)
		return ;
	last = *b;
	before_last = NULL;
	while (last->next)
	{
		before_last = last;
		last = last->next;
	}
	before_last->next = NULL;
	last->next = *b;
	*b = last;
	ft_printf("rrb\n");
}
