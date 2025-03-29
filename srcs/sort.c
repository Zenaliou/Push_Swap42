/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:13:56 by marvin            #+#    #+#             */
/*   Updated: 2025/03/18 09:13:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_max_bits(t_stack *a)
{
	int	max;
	int	bits;

	max = find_max(a);
	bits = 0;
	while ((max >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(t_stack **a)
{
	t_stack	*b;
	int		max_bits;
	int		i;
	int		j;
	int		size;

	b = NULL;
	max_bits = get_max_bits(*a);
	i = 0;
	while (i < max_bits)
	{
		size = stack_size(*a);
		j = 0;
		while (j < size)
		{
			if ((((*a)->value >> i) & 1) == 1)
				ra(a);
			else
				pb(a, &b);
			j++;
		}
		while (b)
			pa(a, &b);
		i++;
	}
}
