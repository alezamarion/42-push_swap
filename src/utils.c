/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 14:41:45 by azamario          #+#    #+#             */
/*   Updated: 2021/12/10 18:55:28 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	transform_args(int argc, char **argv, int *num)
{
	int	i;

	i = 0;
	while (i < argc)
	{
		num[i] = ft_atoi(argv[i]);
		i++;
	}
}

static int	*cpy_vector(int len, int *num)
{
	int	*cpy;
	int	i;

	cpy = malloc((sizeof(int) * len) + 1);
	if (!cpy)
		exit(EXIT_FAILURE);
	i = 0;
	while (i < len)
	{
		cpy[i] = num[i];
		i++;
	}
	return (cpy);
}

int	*quick_sort(int len, int *num)
{
	int	*cpy;
	int	aux;
	int	i;

	cpy = cpy_vector(len, num);
	i = 0;
	while (i < len - 1)
	{
		if (cpy[i] > cpy[i + 1])
		{
			aux = cpy[i];
			cpy[i] = cpy[i + 1];
			cpy[i + 1] = aux;
			i = -1;
		}
		i++;
	}
	return (cpy);
}

int	*get_index(int len, int *num, int *cpy)
{
	int	*index;
	int	i;
	int	j;

	index = cpy_vector(len, num);
	i = 0;
	while (i < len)
	{
		j = 0;
		while (index[i] != cpy[j])
			j++;
		index[i] = j;
		i++;
	}
	return (index);
}


int	*link_index(int len, int *num) //(argc, number)
{
	int	*cpy;
	int	*index;

	cpy = quick_sort(len, num);
	index = get_index(len, num, cpy);
	free(cpy);
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
	p = (char *)malloc((sizeof(char *) * limit) + 1);
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

char	**string_bin(int len, int *num)
{
	int		i;
	char	**string_bin;

	string_bin = (char **)malloc((sizeof(char **) * len) + 1);
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