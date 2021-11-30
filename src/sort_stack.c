/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:00:37 by azamario          #+#    #+#             */
/*   Updated: 2021/11/30 13:49:53 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_two(t_stacks *stack)
{
    if (stack->stack_a.head > stack->stack_a.head->next)
		do_print_sa(stack);
    return ;

}

//void    sort_three(t_stacks *stack);

//void    sort_five(t_stacks *stack);

void    sort_stack(t_stacks *stack_a, t_stacks *stack_b)
{
    if (stack->stack_a.size == 1)
        return;
    if (stack->stack_a.size == 2)
        sort_two(stack);
  //  if (stack->stack_a.size == 3)
    //    sort_three(stack);
   // if (stack->stack_a.size > 3 && stack->stack_a.size < 6)
     //   sort_five(stack);
   
}