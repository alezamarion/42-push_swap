/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:02:20 by azamario          #+#    #+#             */
/*   Updated: 2021/12/29 16:27:28 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack		*stack_a;
	t_stack		*stack_b;
	t_stacks	stacks;

	stacks.is_stacks = 0;
	if (!(stack_a = fill_stack(argc, argv)))
		exit_push_swap(&stacks, 0);
	stacks.stack_a = stack_a;
	if (!(stack_b = init_empty_stack()))
		exit_push_swap(&stacks, 1);
	stacks.stack_b = stack_b;
	exit_push_swap(&stacks, 3);
}
