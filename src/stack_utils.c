/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:44:43 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 20:30:00 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *ps_listnew(char *binary_index, int index)
{
    t_stack *node;

	node = (t_stack *)malloc(sizeof(t_stack));
    if (node == NULL)
        exit(EXIT_FAILURE);
    node->binary_index = binary_index;
    node->index = index;
    node->next = NULL;
    return (node);
}

t_stack *ps_listlast(t_stack *lst)
{
    if (lst == 0)
        return (0);
    while (lst->next != 0)
        lst = lst->next;
    return (lst);
}

void    ps_listadd_back(t_stack **lst, t_stack *next)
{
    t_stack *last;

    last = ps_listlast(*lst);
    if (last != 0)
        last->next = next;
    else
        *lst = next;
}