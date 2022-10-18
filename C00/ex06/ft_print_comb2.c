/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 01:55:46 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/12 01:55:46 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int pd, int sd)
{
    char	a;
    char	b;
    char	c;
    char	d;

    a = (pd / 10) + '0';
    b = (pd % 10) + '0';
    c = (sd / 10) + '0';
    d = (sd % 10) + '0';
    write(1, &a, 1);
    write(1, &b, 1);
	write(1, " ", 1);
    write(1, &c, 1);
    write(1, &d, 1);
	
}

void	ft_print_comb2(void)
{
    int pd;
    int sd;
    
    pd = 0;
    while (pd <= 98)
    {
        sd = pd + 1;
        while (sd <= 99)
        {            
          ft_putchar (pd,sd);
		  if (pd != 98 || sd != 99)
			{
				write(1, ", ", 2);
			}
            sd++;
        }
        pd++;
    }
}

int main()
{
 ft_print_comb2();
 write(1,"\n", 1);
 return (0);
}