/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Isabela Genial <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 05:59:44 by Isabela Gen       #+#    #+#             */
/*   Updated: 2022/10/16 05:59:44 by Isabela Gen      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;


    i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    
    return (i);
}

/*
int main()
{
    char *str;

    str = "oi filho da puta";
    
    printf("%d\n", ft_strlen(str));

    return (0);
}
*/