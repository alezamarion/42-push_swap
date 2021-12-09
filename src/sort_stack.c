/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 13:00:37 by azamario          #+#    #+#             */
/*   Updated: 2021/12/08 21:59:01 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    sort_two(t_stacks *stack)
{
    if (stack->stack_a.head->data > stack->stack_a.head->next->data)
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

    first = stack->stack_a.head->data;
    second = stack->stack_a.head->next->data;
    third = stack->stack_a.head->next->next->data;

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

/*
void    sort_five(t_stacks *stack)
{
    int         number;
    int         *temp;
    
    temp = &stack->stack_a.head->data;
    printf("size: %d\n", stack->stack_a.size);
    number = 0;
 
    while (stack->stack_a.size > 3)
    {
        do_print_pb(stack);
        stack->stack_a.size--;
        stack->stack_b.size++;
    }
    sort_three(stack);

    printf("após sort_three\n");
	print_stack(stack->stack_a.head);

    while (stack->stack_b.size > 0)
    {
        do_print_pa(stack);
        stack->stack_b.size--;
        printf("após pa\n");
	    print_stack(stack->stack_a.head);

        while (stack->stack_a.head->next->next != NULL)
        {
            if (*temp > stack->stack_a.head->next->data && *temp < stack->stack_a.head->next->next->data)
            {
                printf("hello");
                if (number == 0)
                    do_print_sa(stack);
                else if (number == 1)
                {
                    do_print_sa(stack);
                    do_print_ra(stack);
                    do_print_sa(stack);
                    do_print_ra(stack);
                }
                else if (number == 2)
                {
                    do_print_rra(stack); 
                    do_print_sa(stack); 
                    do_print_ra(stack); 
                    do_print_ra(stack); 
                }
            }
        	stack->stack_a.head = stack->stack_a.head->next;
        	number++;
        	if (stack->stack_a.head->next->next == NULL)
            	do_print_ra(stack);   
        }        
    }
    printf("depois de tudo\n");
	print_stack(stack->stack_a.head);

}


*/




void    sort_five(t_stacks *stack)
{
    // int		*first;
	// int		*second;
    // int		*third;
	// int		*fourth;
	// int		*fifth;

    // first = stack->stack_a.head->data;
	// second = stack->stack_a.head->next->data;
	// third =  stack->stack_a.head->next->next->data;
	// fourth =  stack->stack_a.head->next->next->next->data;
	// fifth = stack->stack_a.head->next->next->next->next->data;

	print_stack(stack->stack_a.head);
 
    while (stack->stack_a.size > 3)
    {
        do_print_pb(stack);
        stack->stack_a.size--;
        stack->stack_b.size++;
    }
    sort_three(stack);
	printf("após sort_three\n");
	print_stack(stack->stack_a.head); 

    while (stack->stack_b.size > 0)
    {
        do_print_pa(stack);
        stack->stack_b.size--;
        stack->stack_a.size++;

		//if (first > second && first > third)
		if (stack->stack_a.head->data > stack->stack_a.head->next->data && stack->stack_a.head->data < stack->stack_a.head->next->next->data)
		 	do_print_sa(stack);
		else if (stack->stack_a.head->data > stack->stack_a.head->next->next->data && stack->stack_a.head->data < stack->stack_a.head->next->next->next->data)
		{
			do_print_rra(stack);
			do_print_sa(stack);
			do_print_ra(stack);
			do_print_ra(stack);
		}
		else if (stack->stack_a.size == 5 && stack->stack_a.head->data > stack->stack_a.head->next->next->next->data && stack->stack_a.head->data < stack->stack_a.head->next->next->next->next->data)
		{
			do_print_rra(stack); 
			do_print_sa(stack); 
			do_print_ra(stack); 
			do_print_ra(stack); 
		}
		if (stack->stack_a.size > 3  && stack->stack_a.head->data > stack->stack_a.head->next->next->next->data)
		 	do_print_ra(stack);   

		printf("depois de tudo\n");
		print_stack(stack->stack_a.head); 
	}    
}




void    sort_stack(t_stacks *stack)
{
    if (stack->stack_a.size == 1)
        return;
    if (stack->stack_a.size == 2)
         sort_two(stack);
    if (stack->stack_a.size == 3)
         sort_three(stack);
    if (stack->stack_a.size > 3 && stack->stack_a.size <= 5)
         sort_five(stack);  
}