/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 11:02:20 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 09:44:29 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	int			*array_number;
	int			*index;
	char		**bin;

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
	bin = string_bin(argc, index);
	init_struct(&stracks, argc);
	

}

void	init_struct(t_stacks *stack, int argc)
{
	stack->stack_a = NULL;
	stack->stack_b = NULL;
	stack->len = argc;
}