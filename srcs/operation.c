/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:17:28 by marvin            #+#    #+#             */
/*   Updated: 2025/03/18 09:17:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack **a)
{
	int	tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = (*a)->value;
	(*a)->value = (*a)->next->value;
	(*a)->next->value = tmp;
	ft_printf("sa\n");
}

void	sb(t_stack **b)
{
	int	tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = (*b)->value;
	(*b)->value = (*b)->next->value;
	(*b)->next->value = tmp;
	ft_printf("sb\n");
}

void	ss(t_stack **a, t_stack **b)
{
	sa(a);
	sb(b);
	ft_printf("ss\n");
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("pa\n");
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("pb\n");
}
