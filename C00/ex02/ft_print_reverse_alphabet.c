/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:37:26 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/11 19:37:26 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	z;

	z = 122;
	while (z >= 97)
	{
		write(1, &z, 1);
		z--;
	}
}

/*
int main()
{
    ft_print_reverse_alphabet();
    return (0);
}
*/