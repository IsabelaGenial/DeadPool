/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:08:48 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/11 19:08:48 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// escreva uma função que motre o caractere passado como parametro 
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
int main ()
{
    ft_putchar ('I');
    write(1, "\n", 1);
    return (0);
}
*/