/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 19:19:39 by polmarti          #+#    #+#             */
/*   Updated: 2023/09/06 19:19:41 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc((sizeof(int) * (max - min)) + 1);
	if (!dest)
		return (NULL);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	int i = 0;
	int *array;

	array = ft_range(200, 200);
	while (array[i])
		printf("%d ", array[i++]);
	free(array);
	return (0);
}*/