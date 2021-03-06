/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:12:36 by azamario          #+#    #+#             */
/*   Updated: 2022/01/11 17:47:21 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>

typedef struct s_stack
{
	char			*binary_index;
	int				index;
	struct s_stack	*next;

}t_stack;

typedef struct s_stacks
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		limit;
	int		len;
}t_stacks;

//push_swap.c
void		init_struct(t_stacks *stacks, int argc);
void		fill_stack_a(t_stacks *stacks, char **binary_index, int *index);
void		push_swap(t_stacks *stacks, int *index);

//exit.c
void		exit_error(void);
void		freeing(t_stacks *stacks, int *array_number, int *index,
				char **binary_index);
void		listclear(t_stack **linked_list);

//check_args.c
int			validate_args(int argc, char **argv);
void		argv_to_integer(int argc, char **argv, int *array_number);
void		check_duplicates(int argc, int *array_number);
void		array_is_sorted(int argc, int *array_number);

//is_integer.c
int			is_integer(char *argv);

//quick_sort.c
int			*link_index(int argc, int *array_number);
int			*quick_sort(int argc, int *array_number);
int			*get_index(int argc, int *array_number, int *array_copy);

//ft_itob.c
char		**get_binary_index(int argc, int *array_number);
char		*ft_itob(int argc, int array_number);
int			find_limit(int argc);

//stack_utils.c
t_stack		*listnew(char *binary_index, int index);
void		listadd_back(t_stack **lst, t_stack *next);
t_stack		*listlast(t_stack *lst);

//push_swap_short.c
void		short_push_swap(t_stacks *stacks, int *index);

//push_swap_short2.c
int			pos_0_greater_pos_1(int pos_0, int pos_1, int pos_2,
				t_stacks *stacks);
int			pos_0_lower_pos_1(int pos_0, int pos_2, t_stacks *stacks);

//push_swap_long.c
void		long_push_swap(t_stacks *stacks);

//actions.c
void		reverse_rotate(t_stacks *stacks);
void		swap(t_stacks *stacks);
void		rotate(t_stacks *stacks);
void		push_a(t_stacks *stacks);
void		push_b(t_stacks *stacks);

#endif