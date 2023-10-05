/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:34:57 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/23 21:42:03 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while (i < nb / 2)
	{
		if (i == 2147483647)
			return (0);
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main(void) 
{
  printf("%d", ft_is_prime(17425170));
  return (0);
}*/