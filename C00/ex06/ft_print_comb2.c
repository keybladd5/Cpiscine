/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 12:22:11 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/07 12:41:47 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_bynb(int x)
{
	char	d;
	char	u;

	d = x / 10 + 48;
	u = x % 10 + 48;
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	z;

	x = 0;
	while (x <= 98)
	{
		z = x + 1;
		while (z <= 99)
		{
			ft_putchar_bynb(x);
			ft_putchar(' ');
			ft_putchar_bynb(z);
			if (x != 98 || z != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			z++;
		}
		x++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
