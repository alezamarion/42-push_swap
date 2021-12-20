/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 08:58:39 by azamario          #+#    #+#             */
/*   Updated: 2021/12/19 21:59:08 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack		*fill_stack(int argc, char **argv)
{
	int		i;
	int		number;
	t_stack	*stack;

	i = argc;
	stack = init_empty_stack();
	if (stack ==  NULL)
		return (NULL);
	while (--i >= 0)
	{
		number = ft_atoi(argv[i]);
		if (!add_element(stack, number))
		{
			free_stack(stack);
			return (NULL);
		}
	}
	return (stack);	
}

t_stack		*init_empty_stack(void)
{
	t_stack	*stack;

	if(!(stack = (t_stack *)malloc(sizeof(t_stack))))
		return (NULL);
	stack->head = NULL;
	stack->count = 0;
	stack->min = 2147483647;	//verificar isso e linha abaixo
	stack->max = -2147483648;
	stack->max1 = 0;
	stack->max2 = 0;
	return (stack);
}

int		add_element(t_stack	*stack, int	new_number)
{
	t_node	*new_node;

	if(!(new_node = (t_node *)malloc(sizeof(t_node))))
	{
		free_stack(stack);
		return (0);
	}
	new_node->number = new_number;
	new_node->next = stack->head;
	if (new_node->number > stack->max)	
		stack->max = new_node->number;
	if (new_node->number < stack->min)
		stack->min = new_node->number;
	stack->head = new_node;
	stack->count++;
	return (1);
}

void	free_stack(t_stack	*stack)
{
	t_node	*actual;
	t_node	*next;

	while (stack && stack->head)
	{
		actual = stack->head;
		next = stack->head;
		while (next->next)
		{
			actual = next;
			next = next->next;
		}
		if (actual == next)
		{
			free(stack->head);
			stack->head = NULL;
		}
		else
		{
			actual->next = NULL;
			free(next);
		}
	}
	free(stack);
}

void	exit_push_swap(t_stacks *stacks, int number)
{
	if (stacks->is_stacks == 1)
		free_arg(stacks->argv);
	if (number >= 1)
		free_stack(stacks->stack_a);
	if (number >= 2)
		free_stack(stacks->stack_b);
	if (number <= 2)
		error(("ERROR"));
	if (number > 2)
		exit(EXIT_SUCCESS);
}

void	free_arg(char **argv)
{
	int i;

	i = -1;
	while (argv[++i])
		free(argv[i]);
	free(argv);
}

void	error(char *exit_message)
{
	ft_putendl_fd(exit_message, 2);
	exit(EXIT_FAILURE);
}


//////////////////////////////////////////////////
/*
t_node *new_node(int data)
{
	t_node *n;

	n = (t_node *)malloc(sizeof(t_node));
	n->data = data;
	n->next = NULL;
	return (n);
}

void push_to_stack(t_node **stack, t_node *new_node)
{
	new_node->next = *stack;
	*stack = new_node;
}

void print_stack(t_node *stack)
{
	t_node *node;

	node = stack;
	while (node->next != NULL)
	{
		printf("%d\n", node->data);
		node = node->next;
	}
	printf("%d\n", node->data);
}

t_node *get_bottom_element(t_node *stack)
{
	if (stack == NULL)
		return (0);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	append_to_stack(t_node **stack, t_node *new)
{
	t_node	*last;

	last = get_bottom_element(*stack);
	if (last != NULL)
		last->next = new;
	else
		*stack = new;
}
*/