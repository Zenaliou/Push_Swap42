/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 12:32:43 by marvin            #+#    #+#             */
/*   Updated: 2025/03/17 12:32:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

t_stack		*parse_args(int argc, char **argv);
int			is_valid_number(char *str);
int			is_duplicate(t_stack *a, int num);
void		free_stack(t_stack *stack);
void		free_args(char **args);
void		add_to_stack(t_stack **stack, int value);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);
void		radix_sort(t_stack **a);
int			get_max_bits(t_stack *a);
int			is_sorted(t_stack *a);
int			find_max(t_stack *a);
int			stack_size(t_stack *a);
void		sort_three(t_stack **a);
void		sort_small(t_stack **a, t_stack **b);
void		move_min_to_top(t_stack **a, int pos);
int			find_min_pos(t_stack *a);

#endif