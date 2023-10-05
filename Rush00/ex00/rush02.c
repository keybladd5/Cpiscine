/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bautrodr <bautrodr@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:32:41 by bautrodr          #+#    #+#             */
/*   Updated: 2023/07/08 14:13:44 by bautrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print1(int x)
{
	int	counter;

	counter = 1;
	if (counter == 1)
	{
		ft_putchar('A');
		counter++;
	}
	while (counter > 1 && counter < x)
	{
		ft_putchar('B');
		counter++;
	}
	if (counter == x)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	ft_print2(int x)
{
	int	counter;

	counter = 1;
	if (counter == 1)
	{
		ft_putchar('B');
		counter++;
	}
	while (counter > 1 && counter < x)
	{
		ft_putchar(' ');
		counter++;
	}
	if (counter == x)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	ft_print3(int x)
{
	int	counter;

	counter = 1;
	if (counter == 1)
	{
		ft_putchar('C');
		counter++;
	}
	while (counter > 1 && counter < x)
	{
		ft_putchar('B');
		counter++;
	}
	if (counter == x)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	int	counter;

	counter = -1;
	if (x == 0 && y == 0)
	{
		write(1, "Introduzca dos valores superiores a 0\n", 38);
	}
	if (x > 0 || y > 0)
	{
		counter = 1;
	}
	if (counter == 1)
	{
		ft_print1(x);
		counter++;
	}
	while (counter > 1 && counter < y)
	{
		ft_print2(x);
		counter++;
	}
	if (counter == y)
	{
		ft_print3(x);
	}
}
