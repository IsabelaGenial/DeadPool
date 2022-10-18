/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:20:33 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/16 05:20:33 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_ultimate_div_mod (int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;

    *a = div;
    *b = mod;
}

/*
int main ()
{
    int a;
    int b;

    a = 235;
    b = 10;
    ft_ultimate_div_mod(&a, &b);
    printf("%d\n%d\n", a, b);
    return (0);
}
*/