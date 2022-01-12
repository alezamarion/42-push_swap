/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 09:18:24 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 17:41:11 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	find_limit(int argc)
{
	int	limit;

	limit = 0;
	while ((argc / 2) != 0)
	{
		limit++;
		argc = argc / 2;
	}
	return (limit);
}

char	*ft_itob(int argc, int index)
{
	int		digit;
	int		i;
	char	*binary_array;
	int		limit;

	limit = find_limit(argc);
	i = 0;
	binary_array = (char *)malloc((sizeof(char *) * limit) + 1);
	if (binary_array == NULL)
		exit(EXIT_FAILURE);
	while (limit >= 0)
	{
		digit = index >> limit;
		if (digit & 1)
			*(binary_array + i) = 1 + '0';
		else
			*(binary_array + i) = 0 + '0';
		i++;
		limit--;
	}
	*(binary_array + i) = '\0';
	return (binary_array);
}

char	**get_binary_index(int argc, int *index)
{
	int		i;
	char	**binary_index;

	binary_index = (char **)malloc((sizeof(char **) * argc) + 1);
	if (binary_index == NULL)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < argc)
	{
		binary_index[i] = ft_itob(argc, index[i]);
		i++;
	}
	return (binary_index);
}
