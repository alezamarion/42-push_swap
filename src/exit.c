/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:10:29 by azamario          #+#    #+#             */
/*   Updated: 2022/01/11 15:49:42 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    exit_error(void)
{
    ft_putstr_fd("Error\n", 2);
    exit(EXIT_FAILURE);
}

void    freeing(t_stacks *stacks, int *array_number, int *index, 
                                            char **binary_index)
{
    int i;

    free(index);
    index = NULL;
    free(array_number);
    array_number = NULL;
    listclear(&stacks->stack_a);
    listclear(&stacks->stack_b);
    i = 0;
    while (i < stacks->len)
    {
        free(binary_index[i]);
        i++;
    }
    free (binary_index);
}

void    listclear(t_stack **linked_list)
{
    t_stack    *aux;
    t_stack    *temp;

    temp = NULL;
    aux = *linked_list;
    if (aux == NULL)
        return ;
    while (aux != NULL)
    {
        temp = aux->next;
        free(aux);
        aux = temp;
    }
    *linked_list = NULL;
}
