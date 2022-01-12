/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 17:20:31 by azamario          #+#    #+#             */
/*   Updated: 2022/01/12 22:50:21 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	check_is_digit(char *argv)
{
	if (argv[0] == '-' && !ft_isdigit(argv[1]))
		exit_error();
	if (argv[0] == '-' && argv[1] == '\0')
		exit_error();
	if (argv[0] != '-' && !ft_isdigit(argv[0]))
		exit_error();
	if (argv[0] == '\0')
		exit_error();
	return (1);
}

static int	check_is_negative(char *argv, int *negative, int i)
{
	if (argv[i] == '-')
	{
		*negative = 1;
		i++;
	}
	else
		*negative = 0;
	return (i);
}

int	is_integer(char *argv)
{
	int		i;
	long	num;
	int		negative;

	negative = -1;
	i = 0;
	if (!check_is_digit(argv))
		return (0);
	i = check_is_negative(argv, &negative, 0);
	num = 0;
	while (argv[i] != '\0')
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		num = num * 10 + argv[i] - '0';
		if (negative == 1 && - num < INT_MIN)
			return (0);
		if (negative == 0 && num > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}
