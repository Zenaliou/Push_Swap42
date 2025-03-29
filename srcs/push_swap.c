/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:13:00 by marvin            #+#    #+#             */
/*   Updated: 2025/03/18 09:13:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	if (argc <= 1)
		return (0);
	if (argc >= 2)
		a = parse_args(argc, argv);
	if (!a)
		return (1);
	if (stack_size(a) < 3)
	{
		if (!is_sorted(a))
			sa(&a);
	}
	b = NULL;
	if (!is_sorted(a))
	{
		if (stack_size(a) <= 5 && stack_size(a) >= 3)
			sort_small(&a, &b);
		else if (stack_size(a) > 5)
			radix_sort(&a);
	}
	free_stack(a);
	return (0);
}
