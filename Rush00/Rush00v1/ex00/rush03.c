/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 18:57:49 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/07 18:58:55 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_putchar(char c);

void    ft_print(int x, char a, char b, char c)
{
    int counter;
    
    counter = 1;
    if (counter == 1)
    {
        ft_putchar(a);
        counter++;
    }
    while (counter > 1 && counter < x)
    {
        ft_putchar(b);
        counter++;
    }
    if (counter == x)
    {
        ft_putchar(c);
        ft_putchar('\n');
    }
}

void    rush(int x, int y)
{
    int counter;
    
    counter = -1;
    if (x < 0 || y < 0)
    {
        write(1, "Introduzca dos valores superiores a 0\n", 38);
    }
    if (x > 0 || y > 0)
    {
        counter = 1;
    }
    if (counter == 1)
    {
        ft_print(x, 'A', 'B', 'C');
        counter++;
    }
    while (counter > 1 && counter < y)
    {
        ft_print(x, 'B', ' ', 'B');
        counter++;
    }
    if (counter == y && counter != -1)
    {
        ft_print(x, 'A', 'B', 'C');
    }
}