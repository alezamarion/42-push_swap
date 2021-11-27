/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:02:20 by azamario          #+#    #+#             */
/*   Updated: 2021/11/27 11:26:23 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"


t_node  *new_node(int data)
{
    t_node *node;

    node = (t_node *)malloc(sizeof(t_node));
    node->data = data;
    node->next = NULL;
    return(node);
}

void    push(t_node **stack, t_node *new_node)
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
        printf("%d", node->data);
        node = node->next;
    }
    printf("%d\n", node->data);
}

int main(int argc, char **argv)
{
    t_node *stack = NULL;
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
            push(&stack, node);
            if (i == 1)
                break ;
        }
        print_stack(stack);
    }
    else
    {
        printf("Error:\n");
        printf("Too few arguments provided!\n");
    }
    return (0);
}