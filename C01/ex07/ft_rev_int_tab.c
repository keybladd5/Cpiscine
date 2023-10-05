/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 11:48:43 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/10 13:32:03 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;
	int	tmp;

	x = size - 1;
	i = 0;
	tmp = i;
	while (i != size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[x];
		tab[x] = tmp;
		i++;
		x--;
	}
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	int x[5] = {3, 2, 66, 4, 3};
	ft_rev_int_tab(x, 5);
	while(i < 5)
	{
		printf("%d", x[i]);
		i++;
	}
	return (0);
}
