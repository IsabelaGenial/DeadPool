/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:23:23 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/16 23:23:23 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
    int position;
    int pickup;

    position = 0;
    while(position < size / 2)
    {
        pickup = tab[position];
        tab[position] = tab[size - position - 1];
        tab[size - position - 1] = pickup;
        position++;
    }
}

int main ()
{
    int    tab[] = {6, 5, 4, 3, 2, 1,};
    int    size;
    int    position;

    size = 6;
    ft_rev_int_tab(tab, size);
    position = 0;
    while (position < size)
    {
        printf ("%d ", tab[position]);
        position++;
    }
    printf("\n");
    return (0);
}