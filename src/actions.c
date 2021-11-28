/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:43:27 by azamario          #+#    #+#             */
/*   Updated: 2021/11/27 22:36:30 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    swap(t_node **stack)
{
    t_node  *temp;

    temp = *stack;
    *stack = (*stack)->next;
    temp->next = (*stack)->next;
    (*stack)->next = temp;
}

t_node  *get_botton_element(t_node *stack)
{
    if (stack == NULL)
        return (0);
    while (stack->next != NULL)
        stack = stack->next;
    return (stack);
}

void    append_to_stack(t_node **stack, t_node *new)
{
    t_node  *last;

    last = get_botton_element(*stack);
    if (last != NULL)
        last->next = new;
    else
        *stack = new;
}

void    rotate(t_node **stack)
{
    t_node  *temp;

    temp = *stack;
    *stack = (*stack)->next;
    append_to_stack(&(*stack), temp);
    temp->next = NULL;
}

void    reverse_rotate(t_node **stack)
{
    t_node  *last;
    t_node  *temp;

    temp = *stack;
    last = get_botton_element(temp);
    while (temp->next != NULL)
    {
        if (temp->next->next == NULL)
            temp->next = NULL;
        else
            temp = temp->next;
    }
    populate_stack(stack, last);
}

void    push(t_node **stack_out, t_node **stack_in)
{
    t_node  *temp;

    temp = *stack_out;
    if ((*stack_out)->next != NULL)
        *stack_out = (*stack_out)->next;
    populate_stack(&(*stack_in), temp);
}

