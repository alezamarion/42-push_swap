/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 13:50:14 by azamario          #+#    #+#             */
/*   Updated: 2022/01/11 13:57:10 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	long_push_swap(t_stacks *stacks)
{
	int	i;

	stacks->limit = find_limit(stacks->len);
	i = 0;
	while (stacks->limit >= 0)
	{
		while (i < stacks->len)
		{
			if (stacks->stack_a->binary_index[stacks->limit] == '0')
				push_b(stacks);
			else
				rotate(stacks);
			i++;
		}
		while (stacks->stack_b)
			push_a(stacks);
		stacks->limit--;
		i = 0;
	}
}
