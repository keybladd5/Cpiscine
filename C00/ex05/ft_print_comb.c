/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:41:51 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/10 16:36:17 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_comb(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	ft_putcommaspace(void)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	ft_putchar(comma);
	ft_putchar(space);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0';
	while (c <= '7')
	{
		d = c + 1;
		while (d <= '8')
		{
			u = d + 1;
			while (u <= '9')
			{
				ft_putchar_comb(c, d, u);
				if (c != '7')
				{
					ft_putcommaspace();
				}
				u++;
			}
			d++;
		}
		c++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
