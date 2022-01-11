/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_short2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:37:42 by azamario          #+#    #+#             */
/*   Updated: 2022/01/11 13:47:02 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int pos_0_greater_pos_1(int pos_0, int pos_1, int pos_2, 
                                t_stacks *stacks)
{
    if (pos_1 > pos_2)
    {
        swap(stacks);
        reverse_rotate(stacks);
        return (1);
    }
    if (pos_0 > pos_2)
    {
        rotate(stacks);
        return (1);
    }
    else
    {
        swap(stacks);
        return (1);
    }
    return (0);
}

int pos_0_lower_pos_1(int pos_0, int pos_2, t_stacks *stacks)
{
    if (pos_0 > pos_2)
    {
        reverse_rotate(stacks);
        return (1);
    }
    else
    {
        swap(stacks);
        rotate(stacks);
        return (1);
    }
    return (0);  
}