/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:16:38 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/25 22:48:25 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	a;

	a = 2;
	if (nb == 1)
		return (1);
	while (a <= nb && a <= 46341)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}
/*#include <stdio.h>
int main() 
{
  printf("%d", ft_sqrt(156600196)); 
  return 0;
}*/
