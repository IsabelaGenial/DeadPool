/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:16:05 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/11 19:16:05 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 97;
	while (a <= 122)
	{
		write (1, &a, 1);
		a++;
	}
}

/*int main()
{
	ft_print_alphabet();
	return (0);
}
*/
