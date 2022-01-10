/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:12:36 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 09:30:16 by azamario         ###   ########.fr       */
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


//quick_sort.c
int 		*link_index(int argc, int *array_number);
int 		*quick_sort(int argc, int *array_number);
int			*get_index(int argc, int *array_number, int *array_copy);

//ft_itob.c
char    	**string_bin(int argc, int *array_number);
char    	*ft_itob(int argc, int array_number);
int 		find_limit(int argc);



#endif