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

int find_limit(int argc)
{
    int limit;

    limit = 0;
    while ((argc / 2) != 0)
    {
        limit++;
        argc = argc / 2;
    }
    return (limit);
}

char    *ft_itob(int argc, int index) //array 3 2 1  //indice 2 1 0
{
   // int     limit_count;
    int     digit;
    int     i;
    char    *binary_array; //
    int     limit;

    limit = find_limit(argc);       //limit is 1
    i = 0;
    binary_array = (char *)malloc((sizeof(char *) * limit) + 1);
    if (binary_array == NULL)
        exit(EXIT_FAILURE);
   // limit_count = limit;                          primeira, índice 2                      segunda, índice 1
    while (limit >= 0)                      // 1                                        |   1                       0
    {
        digit = index >> limit;             // 2 >> 1 = 10 >> 01 = 1 | 2 >> 0 = 10      |   1 >> 1 = 01 >> 1 = 0    01 >> 0 = 01
        if (digit & 1)                      // 1 & 1 = 1 | 10 & 01 = 0                  |   0 & 01 = 0              01 & 1 = 1
            *(binary_array + i) = 1 + '0';  // 0 + 0 = '0'                              |                           '0' + 1 = 1 + '0' = '1'
        else
            *(binary_array + i) = 0 + '0';  //             | '0'+ 1 = 1 + '0' = '10'    |   0 = '0'                 
        i++;                                // 1                                        |                          
        limit--;                            // 0                                        |                           
    }
    *(binary_array + i) = '\0';
    return (binary_array);                  // retorna '10'                                 retorna '01'
}

char    **get_binary_index(int argc, int *index)
{
    int     i;
    char    **binary_index;

    binary_index = (char **)malloc((sizeof(char **) * argc) + 1);
    if (binary_index == NULL)
        exit(EXIT_FAILURE);
    i = 0;
    while (i < argc)
    {
        binary_index[i] = ft_itob(argc, index[i]); // índice binário na posição 0 é '10'
        i++;
    }
    return (binary_index);
}