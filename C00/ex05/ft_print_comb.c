/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 00:35:06 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/12 00:35:06 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pint_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 48;
	while (n1 <= 55)
	{
		n2 = n1 + 1;
		while (n2 <= 56)
		{
			n3 = n2 + 1;
			while (n3 <= 57)
			{
				write (1, &n1, 1);
				write (1, &n2, 1);
				write (1, &n3, 1);
				if (n1 != 55 || n2 != 56 || n3 != 57)
					write (1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
}

/*
int main()
{
	ft_pint_comb();
	write (1, "\n", 1);
	return (0);
}
*/