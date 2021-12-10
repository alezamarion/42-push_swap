/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:41:45 by azamario          #+#    #+#             */
/*   Updated: 2021/12/10 16:22:34 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	transform_args(int argc, char **argv, int *number)
{
	int i;

	i = 0;
	while (i < argc)
	{
		number[i] = ft_atoi(argv[i]);
		i++;
	}	
}

static int	*copy_vector(int len, int *number)
{
	int	*copy;
	int	i;

	copy = malloc(sizeof(int) * len + 1);
	if (!copy)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < len)
	{
		copy[i] = number[i];
		i++;
	}
	return (copy);
}

int	*quick_sort(int len, int *number)
{
	int	*copy;
	int	aux;
	int	i;

	copy = copy_vector(len, number);
	i = 0;
	while (i < len -1)
	{
		if (copy[i] > copy[i + 1])
		{
			aux = copy[i];
			copy[i] = copy[i + 1];
			copy[i + i] = aux;
			i = -1;
		}
		i++;
	}
	return (copy);
}

int	*get_index(int len, int *number, int *copy)
{
	int	*index;
	int	i;
	int	j;

	index = copy_vector(len, number);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (index[i] != copy[j])
			j++;
		index[i] = j;
		i++;
	}
	return (index);
}


int	*link_index(int len, int *number)
{
	int	*copy;
	int	*index;

	copy = quick_sort(len, number);
	index = get_index(len, number, copy);
	free(copy);
	return (index);
}

/////////////////////////////////////////////////////////////

int	find_limit(int len)
{
	int	limit;	

	limit = 0;
	while ((len / 2) != 0)
	{
		limit++;
		len = len / 2;
	}
	return (limit);
}

char	*ft_itob(int len, int num)
{
	int		c;
	int		d;
	int		t;
	char	*p;
	int		limit;

	limit = find_limit(len);
	t = 0;
	p = (char *)malloc(sizeof(char *) * limit + 1);
	if (p == NULL)
		exit(EXIT_FAILURE);
	c = limit;
	while (c >= 0)
	{
		d = num >> c;
		if (d & 1)
			*(p + t) = 1 + '0';
		else
			*(p + t) = 0 + '0';
		t++;
		c--;
	}
	*(p + t) = '\0';
	return (p);	
}

char	**string_binary(int len, int *num)
{
	int	i;
	char	**string_bin;

	string_bin = (char **)malloc(sizeof(char **) * len + 1);
	if (string_bin == NULL)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < len)
	{
		string_bin[i] = ft_itob(len, num[i]);
		i++;
	}
	return (string_bin);	
}