/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: polmarti <polmarti@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:58:44 by polmarti          #+#    #+#             */
/*   Updated: 2023/07/18 17:02:36 by polmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (*str != '\0')
	{
		str++;
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (x);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (x);
}

/*#include <stdio.h>
#include <string.h>
int    main (void)
{
  char dest[10] = " ";
  char src[5] = "Hola";
  printf("%u", ft_strlcpy(dest, src, 0));
  printf("%s\n", dest);
  //printf("%lu", strlcpy(dest, src, 0));
  //printf("%s\n", dest);
  return (0);
}*/
