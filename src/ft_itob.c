/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azamario <azamario@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 09:18:24 by azamario          #+#    #+#             */
/*   Updated: 2022/01/10 09:37:46 by azamario         ###   ########.fr       */
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

char    *ft_itob(int argc, int array_number)
{
    int     limit_count;
    int     digit;
    int     i;
    char    *pointer;
    int     limit;

    limit = find_limit(argc);
    i = 0;
    pointer = (char *)malloc((sizeof(char *) * limit) + 1);
    if (pointer == NULL)
        exit(EXIT_FAILURE);
    limit_count = limit;
    while (limit_count >= 0)
    {
        digit = array_number >> limit_count;
        if (digit & 1)
            *(pointer + i) = 1 + '0';
        else
            *(pointer + i) = 0 + '0';
        i++;
        limit_count--;
    }
    *(pointer + i) = '\0';
    return (pointer);
}

char    **string_bin(int argc, int *array_number)
{
    int     i;
    char    **string_bin;

    string_bin = (char **)malloc((sizeof(char **) * argc) + 1);
    if (string_bin == NULL)
        exit(EXIT_FAILURE);
    i = 0;
    while (i < argc)
    {
        string_bin[i] = ft_itob(argc, array_number[i]);
        i++;
    }
    return (string_bin);
}