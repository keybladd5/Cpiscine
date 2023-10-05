/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:29:10 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/04 18:52:30 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

void	ft_is_negative(int i)
{
	if (i < 0)
	{
		ft_putchar('N');
	}
	if (i >= 0)
	{
		ft_putchar('P');
	}
}
/*int	main(void)
{
	ft_is_negative(9);
	return (0);
}*/
