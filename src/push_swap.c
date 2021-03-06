/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:02:20 by azamario          #+#    #+#             */
/*   Updated: 2022/01/12 23:52:39 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			*array_number;
	int			*index;
	char		**binary_index;

	if (argc == 1)
		exit(0);
	argc--;
	argv++;
	array_number = malloc(sizeof(int) * argc);
	if (!array_number)
		exit_error();
	validate_args(argc, argv);
	argv_to_integer(argc, argv, array_number);
	check_duplicates(argc, array_number);
	array_is_sorted(argc, array_number);
	index = link_index(argc, array_number);
	binary_index = get_binary_index(argc, index);
	init_struct(&stacks, argc);
	fill_stack_a(&stacks, binary_index, index);
	push_swap(&stacks, index);
	freeing(&stacks, array_number, index, binary_index);
	return (0);
}

void	init_struct(t_stacks *stacks, int argc)
{
	stacks->stack_a = NULL;
	stacks->stack_b = NULL;
	stacks->len = argc;
}

void	fill_stack_a(t_stacks *stacks, char **binary_index, int *index)
{
	int	i;

	if (stacks->len)
	{
		i = 0;
		stacks->stack_a = listnew(binary_index[i], index[i]);
		while (i < stacks->len -1)
		{
			i++;
			listadd_back(&stacks->stack_a, listnew(binary_index[i], index[i]));
		}
	}
}

void	push_swap(t_stacks *stacks, int *index)
{
	if (stacks->len <= 5)
		short_push_swap(stacks, index);
	else
		long_push_swap(stacks);
}
