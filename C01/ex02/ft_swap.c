/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 04:44:16 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/16 04:44:16 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b)
{
    int backoff;
    
    backoff = *a;
    *a = *b;
    *b = backoff;
}

/*
int main()
{
    int a;
    int b;

    a = 12;
    b = 65;
    ft_swap( &a, &b);
    printf ("%d\n%d\n", a, b);
    return(0);
}
*/