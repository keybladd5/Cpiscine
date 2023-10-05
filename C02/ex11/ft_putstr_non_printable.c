/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:58:58 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/18 16:56:57 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_decimal_to_hex(unsigned char c)
{
	char	*base;

	base = "0123456789abcdef";
	ft_putchar(base[c / 16]);
	ft_putchar(base[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			ft_decimal_to_hex(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*int	main(void)
{
	char	a[] = "Coucou\ntu vas b\n \tien ?";
	
	ft_putstr_non_printable(a);
	return (0);
}*/
