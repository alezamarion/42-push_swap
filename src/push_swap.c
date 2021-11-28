/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:02:20 by azamario          #+#    #+#             */
/*   Updated: 2021/11/27 22:34:37 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*
    terminar push
    fazer do-action
    fazer organizar 1
    fazer organizar 2
    fazer organizar 3
    fazer organizar 5
*/

t_node  *new_node(int data)
{
    t_node *node;

    node = (t_node *)malloc(sizeof(t_node));
    node->data = data;
    node->next = NULL;
    return(node);
}

void    populate_stack(t_node **stack, t_node *new_node)
{
    new_node->next = *stack;
    *stack = new_node;
}

void    print_stack(t_node *stack)
{
    t_node  *node;

    node = stack;
    while (node->next != NULL)
    {
        printf("%d\n", node->data);
        node = node->next;
    }
    printf("%d\n", node->data);
}

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    t_node *stack_b = NULL;
    t_node *node = NULL;
    int i;

    i = 0;
    if (argc >= 2)
    {
        while (argv[i])
            i++;
        while (argv[--i])
        {
            node = new_node(ft_atoi(argv[i]));
            populate_stack(&stack_a, node);
            if (i == 1)
                break ;
        }
        printf("stack_a before\n");
        print_stack(stack_a);
        push(&stack_a, &stack_b);
        push(&stack_a, &stack_b);
        push(&stack_a, &stack_b);
        push(&stack_a, &stack_b);
        //push(&stack_a, &stack_b);
        printf("----------\n");
        printf("stack_a after\n");
        print_stack(stack_a);
        printf("----------\n");
        printf("stack_b after\n");
        print_stack(stack_b);


    }
    else
    {
        printf("Error:\n");
        printf("Too few arguments provided!\n");
    }
    return (0);
}