/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 08:31:47 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 09:16:26 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int  *copy_vector(int argc, int *array_number)
{
    int *copy;
    int i;

    copy = malloc((sizeof(int) * argc) + 1);
    if (!copy)
        exit(EXIT_FAILURE);
    i = 0;
    while (i < argc)
    {
        copy[i] = array_number[i];
        i++;
    }
    return (copy);
}

int *quick_sort(int argc, int *array_number)
{
    int *array_copy;
    int aux;
    int i;

    array_copy = copy_vector(argc, array_number);
    i = 0;
    while (i < argc - 1)
    {
        if (array_copy[i] > array_copy[i + 1])
        {
            aux = array_copy[i];
            array_copy[i] = array_copy[i + 1];
            array_copy[i + 1] = aux;
            i = -1;
        }
        i++;
    }
    return (array_copy);
}

int	*get_index(int argc, int *array_number, int *array_sorted)
{
	int	*index;
	int	i;
	int	j;

	index = copy_vector(argc, array_number);
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (index[i] != array_sorted[i]) 
			j++;
		index[i] = j;
		i++;
	}
	return (index);
}

int *link_index(int argc, int *array_number)
{
    int *array_sorted;
    int *index;

    array_sorted = quick_sort(argc, array_number);
    index = get_index(argc, array_number, array_sorted);
	free(array_sorted);
	return (index);
}