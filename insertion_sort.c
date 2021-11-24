/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:59:08 by azamario          #+#    #+#             */
/*   Updated: 2021/11/24 16:52:08 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//insertion sort algorithm, just looking around
void	insertion_sort(int *array, int numb_elements)
{
	int i;
	int	value;
	int hole;
	int num_operations;

	i = 0;
	num_operations = 0;
	for (i = 0; i < numb_elements; i++)
	{
		value = array[i];
		hole = i;
		while (hole > 0 && array[hole - 1] > value)
		{
			array[hole] = array[hole - 1];
			hole -= 1;
			num_operations++;
		}
		array[hole] = value;
	}
	printf("Number operations = %d\n", num_operations);
}

int	main(void)
{
	int array[] = {7, 5, 4, 3, 2, 1};
	int i;

	i = 0;	
	for (i = 0; i < 6; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	insertion_sort(array, 6);

	i = 0;
	for (i = 0; i < 6; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

//simple stack implementation in c
/*
int stack[256];
int count = 0;

void	push(int x)
{
	stack[count] = x;
	count++;
}

int	pop()
{
	int result = stack[count - 1];
	count--;
	return (result);
}

int	main(int argc, char* argv[])
{
	push(1);
	push(2);
	push(3);
	push(5);

	int i;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", pop());
	}
	printf("\nHello mothafuckaz\n");

	return(0);
}
*/
