/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_short.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:16:11 by azamario          #+#    #+#             */
/*   Updated: 2022/01/11 17:39:05 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int  two_numbers(t_stacks *stack)
{
    reverse_rotate(stack);
    return (0);
}

static int  three_numbers(t_stacks *stack)
{
    int pos_0;
    int pos_1;
    int pos_2;

    pos_0 = stack->stack_a->index;
    pos_1 = stack->stack_a->next->index;
    pos_2 = stack->stack_a->next->next->index;
    if (pos_0 < pos_1 && pos_1 < pos_2)
        return (1);
    if (pos_0 > pos_1)
    {
        pos_0_greater_pos_1(pos_0, pos_1, pos_2, stack);
        return (1);
    }
    else
    {
        pos_0_lower_pos_1(pos_0, pos_2, stack);
        return (1);
    }
    return (0);
}

static int  sort_four_or_five(t_stacks *stacks, int *index)
{
    if (index[5] == 0)
        reverse_rotate(stacks);
    while (stacks->stack_a->index != 0)
        rotate(stacks);
    push_b(stacks);
    if (stacks->len == 5)
    {
        while (stacks->stack_a->index != 1)
            rotate(stacks);
        push_b(stacks);
    }
    three_numbers(stacks);
    if (stacks->len == 4)
        push_a(stacks);
    if (stacks->len == 5)
    {
        push_a(stacks);
        push_a(stacks);
    }
    return (0);
}

void    short_push_swap(t_stacks *stacks, int *index)
{
    if (stacks->len == 2)
        two_numbers(stacks);
    else if (stacks->len == 3)
    {
        three_numbers(stacks);
        return ;
    }
    else if (stacks->len > 3)
        sort_four_or_five(stacks, index);
}
