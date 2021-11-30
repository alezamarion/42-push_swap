/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:02:20 by azamario          #+#    #+#             */
/*   Updated: 2021/11/30 13:53:21 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

	// Se está ordenada
	// Se existem duplicatas
	// limpar a stack

int main(int argc, char **argv)
{
	t_stacks	stacks;
	t_node	*node = NULL;
	int i;

	i = 0;

	ft_bzero(&stacks, sizeof(t_stacks));
	if (argc >= 2)
	{
		while (argv[i])
			i++;
		while (argv[--i])
		{
			node = new_node(ft_atoi(argv[i]));
			push_to_stack(&stacks.stack_a.head, node);
            stacks.stack_a.size++;
			if (i == 1)
				break ;	
		}
		sort_stack(&stack->stack_a, &stack->stack_b);
        
        //do_print_sa(&stacks);
		printf("---------------------------\n");
		print_stack(stacks.stack_a.head);
        printf("size: %d\n", stacks.stack_a.size);
	}
	else
	{
		ft_putstr_fd("Error:\n", 1);
		ft_putstr_fd("	Too few arguments provided!", 1);
	}

	return (0);
}