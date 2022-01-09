/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:12:36 by azamario          #+#    #+#             */
/*   Updated: 2022/01/09 19:52:51 by azamario         ###   ########.fr       */
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
	char			*data; //recebe o bin
	int				index; //recebe o index
	struct s_stack	*next;

}t_stack;

typedef struct s_stacks
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		limit;
	int		len;
}t_stacks;

//exit.c
void    	exit_error(void);

//check_args.c
int 		validate_args(int argc, char **argv);
void    	argv_to_integer(int argc, char **argv, int *array_number);
void   		check_duplicates(int argc, int *array_number);
void    	array_is_sorted(int argc, int *array_number);



//is_integer.c
int 		is_integer(char *argv);





#endif