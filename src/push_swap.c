/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:02:20 by azamario          #+#    #+#             */
/*   Updated: 2021/12/10 16:15:09 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

	// Se está ordenada
	// Se existem duplicatas
	// limpar a stack

int main(int argc, char **argv)
{
	//t_stacks	stacks;
	t_node		*node;
	int			*number;
	char		**binary;
	int 		i;
	int			*index;

	node = NULL;
	i = 0;
	if (argc == 1)
		return (1) ;	
	argc--;
	argv++;
	number = malloc(sizeof(int) * argc);
	if (!number)
		exit(EXIT_FAILURE);
	//validate args(argc, argv);
	transform_args(argc, argv, number);
	//check_duplicates(argc, num);
	// ir (array_is_sorted(argc, number))
	// 	return ;
	index = link_index(argc, number);
	binary = string_binary(argc, index);


	// ft_bzero(&stacks, sizeof(t_stacks));
	// if (argc >= 2)
	// {
	// 	while (argv[i])
	// 		i++;
	// 	while (argv[--i])
	// 	{
	// 		node = new_node(ft_atoi(argv[i]));
	// 		push_to_stack(&stacks.stack_a.head, node);
    //         stacks.stack_a.size++;
	// 		if (i == 1)
	// 			break ;	
	// 	}
	// 	link_index(&stacks);
		
	// 	sort_stack(&stacks);
	// 	printf("\n---------------------------\n");
	// 	//print_stack(stacks.stack_a.head);
    //     //printf("size: %d\n", stacks.stack_a.size);
	// }
	// else
	// {
	// 	ft_putstr_fd("Error:\n", 1);
	// 	ft_putstr_fd("	Too few arguments provided!", 1);
	// }

	return (0);
}