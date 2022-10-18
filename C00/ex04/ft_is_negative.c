/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 23:49:33 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/11 23:49:33 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N\n", 2);
	else
		write(1, "P\n", 2);
}

/*
int main()
{
	ft_is_negative(1);
	ft_is_negative(-1);
	ft_is_negative(0);
	return (0);
}
*/