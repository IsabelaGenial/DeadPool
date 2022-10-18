/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:05:31 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/16 05:05:31 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_div_mod (int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

/*
int main ()
{
  int a; 
  int b;
  int div;
  int mod;

  a = 235;
  b = 10;
  ft_div_mod (a, b, &div, &mod);
  printf ("%d\n%d\n", div, mod);
}
*/