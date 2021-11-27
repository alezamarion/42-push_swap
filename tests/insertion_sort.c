/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 19:59:08 by azamario          #+#    #+#             */
/*   Updated: 2021/11/27 11:01:03 by azamario         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
1 - receber os números e colocar na linked list
2 - tratar erros (número repetido etc)
3 - se até 3 números	
		função3
	se até > 3 <= 5
		função 5
	se > 5 <= 100
		função 100
	se > 100
		função 500

4 funções para organizar: 
	swap
	rotate
	reverse rotate	
	push

3		2		1
2		3		2
1 swap 	1 rra	3
*/

//insertion sort algorithm, just looking around

/*
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
	//int array[] = {7, 5, 4, 3, 2};

	int array[] = {100 ,99 ,98 ,97 ,96 ,95 ,94 ,93 ,92 ,91 ,90 ,89 ,88 ,87 ,86 ,85 ,84 ,83 ,82 ,81 ,80 ,
					79 ,78 ,77 ,76 ,75 ,74 ,73 ,72 ,71 ,70 ,69 ,68 ,67 ,66 ,65 ,64 ,63 ,62 ,61 ,60 ,59 ,
					58 ,57 ,56 ,55 ,54 ,53 ,52 ,51 ,50 ,49 ,48 ,47 ,46 ,45 ,44 ,43 ,42 ,41 ,40 ,39 ,38 ,
					37 ,36 ,35 ,34 ,33 ,32 ,31 ,30 ,29 ,28 ,27 ,26 ,25 ,24 ,23 ,22 ,21 ,20 ,19 ,18 ,17 ,
					16 ,15 ,14 ,13 ,12 ,11 ,10 ,9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
	int i;

	i = 0;	
	for (i = 0; i < 100; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	
	insertion_sort(array, 100);

	i = 0;
	for (i = 0; i < 100; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n\n");

}
*/


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
