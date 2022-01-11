/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:20:53 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 19:55:24 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    reverse_rotate(t_stacks *stack)
{
    t_stack *prev_last;
    t_stack *last;

    if (stack->stack_a)
    {
        last = stack->stack_a;
        prev_last =  NULL;
        while (last->next != NULL)
        {
            prev_last = last;
            last = last->next;
        }
        prev_last->next = NULL;
        last->next = stack->stack_a;
        stack->stack_a = last;
        ft_putstr_fd("rra\n", 1);
    }
}

void    swap(t_stacks *stack)
{
    char    *temp_a;
    char    *temp_b;

    if (stack->stack_a)
    {
        temp_a = stack->stack_a->binary_index;
        temp_b = stack->stack_a->next->binary_index;
        stack->stack_a->binary_index = temp_b;
        stack->stack_a->next->binary_index = temp_a;
        ft_putstr_fd("sa\n", 1);
    }
}

void    rotate(t_stacks *stack)
{
    t_stack *first;
    t_stack *last;

    if (stack->stack_a)
    {
        first = stack->stack_a;
        last = stack->stack_a;
        while (last->next != NULL)
            last = last->next;
        stack->stack_a = first->next;
        first->next = NULL;
        last->next = first;
        ft_putstr_fd("ra\n", 1);
    }
}