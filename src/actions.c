/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:20:53 by azamario          #+#    #+#             */
/*   Updated: 2022/01/11 13:47:08 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reverse_rotate(t_stacks *stacks)
{
	t_stack	*prev_last;
	t_stack	*last;

	if (stacks->stack_a)
	{
		last = stacks->stack_a;
		prev_last = NULL;
		while (last->next != NULL)
		{
			prev_last = last;
			last = last->next;
		}
		prev_last->next = NULL;
		last->next = stacks->stack_a;
		stacks->stack_a = last;
		ft_putstr_fd("rra\n", 1);
	}
}

void	swap(t_stacks *stacks)
{
	char	*temp_a;
	char	*temp_b;

	if (stacks->stack_a)
	{
		temp_a = stacks->stack_a->binary_index;
		temp_b = stacks->stack_a->next->binary_index;
		stacks->stack_a->binary_index = temp_b;
		stacks->stack_a->next->binary_index = temp_a;
		ft_putstr_fd("sa\n", 1);
	}
}

void	rotate(t_stacks *stacks)
{
	t_stack	*first;
	t_stack	*last;

	if (stacks->stack_a)
	{
		first = stacks->stack_a;
		last = stacks->stack_a;
		while (last->next != NULL)
			last = last->next;
		stacks->stack_a = first->next;
		first->next = NULL;
		last->next = first;
		ft_putstr_fd("ra\n", 1);
	}
}

void	push_b(t_stacks *stacks)
{
	t_stack	*first;

	if (stacks->stack_a)
	{
		first = stacks->stack_a;
		stacks->stack_a = first->next;
		first->next = stacks->stack_b;
		stacks->stack_b = first;
		ft_putstr_fd("pb\n", 1);
	}
}

void	push_a(t_stacks *stacks)
{
	t_stack	*first;

	if (stacks->stack_b)
	{
		first = stacks->stack_b;
		stacks->stack_b = first->next;
		first->next = stacks->stack_a;
		stacks->stack_a = first;
		ft_putstr_fd("pa\n", 1);
	}
}
