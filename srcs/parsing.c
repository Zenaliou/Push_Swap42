/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 09:20:59 by marvin            #+#    #+#             */
/*   Updated: 2025/03/18 09:20:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	add_to_stack(t_stack **stack, int value)
{
	t_stack	*new;
	t_stack	*last;

	new = malloc(sizeof(t_stack));
	if (!new)
		return ;
	new->value = value;
	new->next = NULL;
	if (!*stack)
		*stack = new;
	else
	{
		last = *stack;
		while (last->next)
			last = last->next;
		last->next = new;
	}
}

void	free_args(char **args)
{
	int	i;

	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

static int	validate_and_add(t_stack **a, char *arg)
{
	int	num;

	if (!is_valid_number(arg))
	{
		ft_printf("Error\n");
		return (0);
	}
	num = ft_atol(arg);
	if (is_duplicate(*a, num))
	{
		ft_printf("Error\n");
		return (0);
	}
	if (num < INT_MIN || num > INT_MAX)
	{
		ft_printf("Error\n");
		return (0);
	}
	add_to_stack(a, num);
	return (1);
}

static char	**get_args(int argc, char **argv)
{
	if (argc == 2)
		return (ft_split(argv[1], ' '));
	else
		return (argv + 1);
}

t_stack	*parse_args(int argc, char **argv)
{
	char	**args;
	t_stack	*a;
	int		i;

	a = NULL;
	args = get_args(argc, argv);
	i = 0;
	while (args[i])
	{
		if (!validate_and_add(&a, args[i]))
		{
			free_stack(a);
			if (argc == 2)
				free_args(args);
			return (NULL);
		}
		i++;
	}
	if (argc == 2)
		free_args(args);
	return (a);
}
