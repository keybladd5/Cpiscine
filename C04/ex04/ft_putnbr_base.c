/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 18:08:20 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/24 20:22:29 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned int unbr, char *base, int b)
{
	int	a;

	if ((unbr / b) != 0)
	{
		a = unbr % b;
		ft_putchar(unbr / b, base, b);
		write(1, &base[a], 1);
	}
	else if ((unbr / b) == 0)
	{
		a = unbr % b;
		write(1, &base[a], 1);
	}
}

int	ft_check_len_error(char *base)
{
	int	i;
	int	x;

	i = 0;
	x = 1;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i])
	{
		while (base[x])
		{
			if (base[x] == base[i])
				return (0);
			if (base[i] == '-' || base[i] == '+')
				return (0);
			if (base[i] < 33 || base[i] > 126) 
				return (0);
			x++;
		}
		i++;
		x = i + 1;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				i;
	unsigned int	unbr;

	i = ft_check_len_error(base);
	if (i == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		unbr = nbr * -1;
		ft_putchar(unbr, base, i);
	}
	else
	{
		unbr = nbr;
		ft_putchar(nbr, base, i);
	}
}
/*int     main(void)
{
        char *base = "0123456789";
        int x = -2147483648;
        ft_putnbr_base(x, base);
        return (0);
}
// 21 cuando acaba la ultima funcion recursiva pasa a este write
// 22 imprime la posicion a de la base 
// 27 primer output que sale en la ultima funcion recursiva*/
