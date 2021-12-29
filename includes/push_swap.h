#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct		s_node
{
	int				number;
	struct s_node 	*next;
}					t_node;

typedef struct	s_stack
{
	t_node		*head;
	int			count;
	int			max;
	int			max1;
	int			max2;
	int			min;
}				t_stack;

typedef struct	s_stacks
{
	t_stack 	*stack_a;
	t_stack 	*stack_b;
	char		**argv;
	int			is_stacks;
}				t_stacks;

//stack_operations
t_stack		*fill_stack(int argc, char **argv);
t_stack		*init_empty_stack(void);
int			add_element(t_stack	*stack, int	new_number);
void		free_stack(t_stack	*stack);
void		exit_push_swap(t_stacks *stacks, int number);
void		free_arg(char **argv);
void		error(char *exit_message);



/*
t_node  *new_node(int data);
void    push_to_stack(t_node **stack, t_node *new_node);
void    print_stack(t_node *stack);
t_node  *get_bottom_element(t_node *stack);
void    append_to_stack(t_node **stack, t_node *new);
*/

/*
//actions
void    swap(t_node **stack);
void    rotate(t_node **stack);
void    reverse_rotate(t_node **stack);
void    push_a(t_stack *stack_a, t_stack *stack_b);
void    push_b(t_stack *stack_a, t_stack *stack_b);

//do_print_actions
void    do_print_sa(t_stacks *stack);
void    do_print_sb(t_stacks *stack);
void    do_print_ss(t_stacks *stack);
void    do_print_ra(t_stacks *stack);
void    do_print_rb(t_stacks *stack);
void    do_print_rr(t_stacks *stack);
void    do_print_rra(t_stacks *stack);
void    do_print_rrb(t_stacks *stack);
void    do_print_rrr(t_stacks *stack);
void    do_print_pa(t_stacks *stack);
void    do_print_pb(t_stacks *stack);

//sort_stack
void    sort_stack(t_stacks *stack);
void    sort_two(t_stacks *stack);
void    sort_three(t_stacks *stack);
void    sort_five(t_stacks *stack);

//utils
void	transform_args(int argc, char **argv, int *number);
int		*link_index(int len, int *number);
int		*quick_sort(int len, int *number);
int		*get_index(int len, int *number, int *copy);
char	**string_bin(int len, int *num);
char	*ft_itob(int len, int num);
int		find_limit(int len);

*/
#endif