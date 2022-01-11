/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_short.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:16:11 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 19:51:09 by azamario         ###   ########.fr       */
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

void    short_push_swap(t_stacks *stack, int *index)
{
    if (stack->len == 2)
        two_numbers(stack);
    else if (stack->len == 3)
    {
        three_numbers(stack);
        return ;
    }
    //continuar daqui
    (void) index;
    
}