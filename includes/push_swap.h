#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//atualizar libft: ft_lstadd_front e ft_lstadd_back

typedef struct  s_node
{
    int             data;
    struct s_node   *next;
}t_node;

typedef struct s_stack
{
    t_node  *head;
    int     size;
}t_stack;

typedef struct s_stacks
{
    t_stack *stack_a;
    t_stack *stack_b;
}t_stacks;

//push_swap
t_node  *new_node(int data);
void    populate_stack(t_node **stack, t_node *new_node);
void    print_stack(t_node *stack);

//actions
void    swap(t_node **stack);
void    rotate(t_node **stack);
void    append_to_stack(t_node **stack, t_node *new);
t_node  *get_botton_element(t_node *stack);
void    reverse_rotate(t_node **stack);
void    push(t_node **stack_out, t_node **stack_in);


#endif