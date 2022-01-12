/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:16:41 by azamario          #+#    #+#             */
/*   Updated: 2022/01/12 22:34:33 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	validate_args(int argc, char **argv)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		if (is_integer(argv[i]) == 0)
		{
			exit_error();
			return (-1);
		}
		i++;
	}
	return (0);
}

void	argv_to_integer(int argc, char **argv, int *array_number)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		array_number[i] = ft_atoi(argv[i]);
		i++;
	}
}

void	check_duplicates(int argc, int *array_number)
{
	int	i;
	int	j;

	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (array_number[i] == array_number[j])
				exit_error();
			j++;
		}
		i++;
	}
}

void	array_is_sorted(int argc, int *array_number)
{
	int	i;

	i = 0;
	while (i < argc - 1 && array_number[i] < array_number[i + 1])
		i++;
	if (i == argc - 1)
		exit(EXIT_SUCCESS);
}
