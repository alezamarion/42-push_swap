/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:00:37 by azamario          #+#    #+#             */
/*   Updated: 2021/12/03 18:06:53 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_two(t_stacks *stack)
{
    if (stack->stack_a->head->data > stack->stack_a->head->next->data)
        do_print_sa(stack);
    else
        return ;
    return ;
}

void    sort_three(t_stacks *stack)
{
    int first;
    int second;
    int third;

    first = stack->stack_a->head->data;
    second = stack->stack_a->head->next->data;
    third = stack->stack_a->head->next->next->data;

	if (first > second && second > third && first > third)
	{
		do_print_sa(stack);
		do_print_rra(stack);
	}
	else if (first < second && second > third && first < third)
	{
		do_print_rra(stack);
		do_print_sa(stack);
	}
	else if (first > second && second < third && first < third)
		do_print_sa(stack);
	else if (first < second && second > third && first > third)
		do_print_rra(stack);
	else if (first > second && second < third && first > third)
		do_print_ra(stack);
    else if (first < second && second < third)
        return ;
}

void    sort_five(t_stacks *stacks)
{
    while (stacks->stack_a->size > 3)
        do_print_pb(stacks);
    sort_three(stacks);
    do_print_pa(stacks); //mandar de volta 1 número
    while (stacks->stack_a->head->next != NULL)
    {
        if (stacks->stack_a->head->data > stacks->stack_a->head->next)
            stacks->stack_a->head = stacks->stack_a->head->next;
    }


        // colocar ele na ordem certa na stack A 
 
        // mandar de volta outro númmero
        // colocar na ordem

}
  
        //     stack_a                     stack_b
        // início  pb pb sort_three        sort_two pa pa
        //     1                
        //     5   5             X   nada | sa |    | ra
        //     2   2   2   2     2  
        //     4   4   4   3     3           5  1
        //     3   3   3   4     4           1  5        
            
        //     se 5 >

        //     5 -> 2 -> 3 -> 4 




void    sort_stack(t_stacks *stack)
{
    if (stack->stack_a->size == 1)
        return ;
    if (stack->stack_a->size == 2)
        sort_two(stack);
    if (stack->stack_a->size == 3)
        sort_three(stack);
    // if (stack->stack_a.size > 3 && stack->stack_a.size < 6)
    //     sort_five(stack);
    // if (stack->stack_a.size > 5 && stack->stack_a.size <= 100)
    //     sort_until_100(stack)
    // if (stack->stack_a.size > 100)
    //     sort_more_than_100(stack)
}