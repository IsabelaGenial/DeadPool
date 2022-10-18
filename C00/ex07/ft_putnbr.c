/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:23:27 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/12 03:23:27 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_recursive(int numb)
{
    char position;

    if (numb / 10 == 0)
    {
		position = (numb % 10) + '0';
		write (1, &position, 1);
		return;
    }
	ft_recursive(numb / 10);
	position = (numb % 10) + '0';
	write (1, &position, 1);
}

void ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write (1, "-", 1);
		write (1, "2", 1);
		nb = 147483648;		
	}
	if (nb < 0)
	{
		nb *= -1;
		write (1, "-", 1);
	}
  ft_recursive(nb);

}

int main ()
{
    ft_putnbr (-200);
	write (1, "\n", 1);
	return (0);
}